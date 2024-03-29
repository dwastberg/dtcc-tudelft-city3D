// Copyright (c) 2018 INRIA Sophia-Antipolis (France).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL: https://github.com/CGAL/cgal/blob/v5.4.5/Shape_detection/include/CGAL/Shape_detection/Region_growing/Region_growing_on_point_set.h $
// $Id: Region_growing_on_point_set.h ad17c0b 2021-05-04T08:47:08+02:00 Simon Giraudot
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Florent Lafarge, Simon Giraudot, Thien Hoang, Dmitry Anisimov
//

#ifndef CGAL_SHAPE_DETECTION_REGION_GROWING_POINT_SET_H
#define CGAL_SHAPE_DETECTION_REGION_GROWING_POINT_SET_H

#include <CGAL/license/Shape_detection.h>

#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/K_neighbor_query.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Sphere_neighbor_query.h>

#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_line_fit_region.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_circle_fit_region.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_plane_fit_region.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_sphere_fit_region.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_cylinder_fit_region.h>

#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_line_fit_sorting.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_circle_fit_sorting.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_plane_fit_sorting.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_sphere_fit_sorting.h>
#include <CGAL/Shape_detection/Region_growing/Region_growing_on_point_set/Least_squares_cylinder_fit_sorting.h>

#endif // CGAL_SHAPE_DETECTION_REGION_GROWING_POINT_SET_H
