#include <pybind11/pybind11.h>
#include <pybind11/numpy.h>
#include <pybind11/stl.h>

#include <iostream>
#include <string>

#include "model/map_builder.h"
// #include "model/map_enumerator.h"
// #include "model/map_serializer_json.h"

#include "method/reconstruction.h"
#include "model/map.h"
#include "model/map_io.h"
#include "model/point_set.h"
#include "model/point_set_io.h"

namespace py = pybind11;

namespace DTCC_CITY3D
{
  bool mesh_building(const py::array_t<double> &pts, const py::array_t<double> &footprint,
                     double ground_height, const pybind11::str &tmp_file)
  {
    auto pts_r = pts.unchecked<2>();
    auto footprint_r = footprint.unchecked<2>();
    auto pt_count = pts_r.shape(0);
    auto vertex_count = footprint_r.shape(0);

    PointSet *pset = new PointSet;
    for (int i = 0; i < pt_count; i++)
    {
      vec3 p(pts_r(i, 0), pts_r(i, 1), pts_r(i, 2));
      pset->points().push_back(p);
    }

    Map *footprint_mesh = new Map;
    MapBuilder builder(footprint_mesh);
    builder.begin_surface();
    builder.begin_facet();
    size_t idx = 0;
    for (int i = 0; i < vertex_count; i++)
    {
      vec3 p(footprint_r(i, 0), footprint_r(i, 1), ground_height);
      builder.add_vertex(p);
      builder.add_vertex_to_facet(idx);
      idx++;
    }
    vec3 p(footprint_r(0, 0), footprint_r(0, 1), ground_height);
    builder.add_vertex(p);
    builder.add_vertex_to_facet(idx + 1);
    builder.end_facet();
    builder.end_surface();

    Map *result = new Map;
    Reconstruction recon;
    // Step 1: segmentation to obtain point clouds of individual buildings
    recon.segmentation(pset, footprint_mesh);

    // Step 2: extract planes from the point cloud of each building (for all
    // buildings)
    std::cout << "extracting roof planes..." << std::endl;
    recon.extract_roofs(pset, footprint_mesh);

    // Step 3: reconstruction of all the buildings in the scene
    std::cout << "reconstructing the buildings (using the SCIP solver)..."
              << std::endl;
    bool status =
        recon.reconstruct(pset, footprint_mesh, result, LinearProgramSolver::SCIP, false);
    if (!status)
    {
      std::cout << "reconstruction failed!" << std::endl;
      return false;
    }
    std::cout << "reconstruction done!" << std::endl;
    MapIO::save(tmp_file, result);
    std::cout << "saved to " << tmp_file << std::endl;
    return true;
  }

} // namespace DTCC_CITY3D

PYBIND11_MODULE(_dtcc_tudelft_city3d, m)
{
  m.doc() = "bindings for calling TUDelft City3D algorithm with DTCC data";
  m.def("mesh_building", &DTCC_CITY3D::mesh_building,
        "mesh a building with given point cloud and footprint");
}
