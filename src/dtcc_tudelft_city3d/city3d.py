from _dtcc_tudelft_city3d import city3d
import dtcc_wrang
from dtcc_model import City, PointCloud, Mesh, Building   
import dtcc_io as io
import numpy as np
import os

import tempfile

def generate_building_meshes(city: City, set_ground_to_zero=True):
    """Generate meshes for all buildings in the city.
    
    Args:
        city (City): The city to generate meshes for.
        set_ground_to_zero (bool, optional): Whether to set the ground level to zero. Defaults to True.
    """
    for building in city.buildings:
        pts = building.roofpoints
        ground_level = building.ground_level
        if len(pts) < 6:
            print("Building has less than 6 points, skipping")
            continue
        if set_ground_to_zero:
            pts[:, 2] -= ground_level
            ground_level = 0
        footprint = np.array(list(building.footprint.exterior.coords)[:-1])
        tmp = tempfile.NamedTemporaryFile(suffix='.obj', delete=False)
        tmp_file = tmp.name
        tmp.close()

        succ = city3d(pts, footprint, ground_level, tmp_file)
        if succ:
            mesh = io.load_mesh(tmp_file)
            os.unlink(tmp_file)
            building.mesh = mesh
        else:
            print("Failed to generate mesh for building", building.uuid)        

