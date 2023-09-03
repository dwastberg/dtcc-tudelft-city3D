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

city = builder.city_methods.compute_building_points(city, pc)
for building in city.buildings:
    pt_offset = np.zeros_like(building.roofpoints.points)
    pt_offset[:, 2] = np.random.uniform(0, 0.1, size=pt_offset.shape[0])
    building.roofpoints.points += pt_offset
city = builder.city_methods.compute_building_heights(city)
city = city3d.generate_building_meshes(city)
