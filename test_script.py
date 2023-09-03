import dtcc_io as io
import dtcc_builder as builder
from dtcc_tudelft_city3d import city3d
import numpy as np

city = io.load_city(
    "/Users/dwastberg/repos/dtcc-platform/dtcc-builder/tests/data/MinimalCase/PropertyMap.shp"
)

pc = io.load_pointcloud(
    "/Users/dwastberg/repos/dtcc-platform/dtcc-builder/tests/data/MinimalCase/PointCloud.las"
)

city = io.load_city(
    "/Users/dwastberg/repos/dtcc-platform/dtcc-builder/data/HelsingborgHarbour2022/PropertyMap.shp"
)

pc = io.load_pointcloud(
    "/Users/dwastberg/repos/dtcc-platform/dtcc-builder/data/HelsingborgHarbour2022/PointCloud.las"
)


city = builder.city_methods.compute_building_points(city, pc)
city = builder.city_methods.compute_building_heights(city)
city = city.terrain_from_pointcloud(pc, 1)
city = city3d.generate_building_meshes(city)

for idx, building in enumerate(city.buildings):
    print(f"Building {idx} has {len(building.mesh.vertices)} vertices")
    print(f"saving building_{idx}.obj")
    io.save_mesh(building.mesh, f"building_{idx}.obj")
