// Copyright (c) 1997-2021
// Utrecht University (The Netherlands),
// ETH Zurich (Switzerland),
// INRIA Sophia-Antipolis (France),
// Max-Planck-Institute Saarbruecken (Germany),
// and Tel-Aviv University (Israel).
// GeometryFactory (France)
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org)
//
// $URL: https://github.com/CGAL/cgal/blob/v5.4.5/Intersections_3/include/CGAL/Intersections_3/Bbox_3_Sphere_3.h $
// $Id: Bbox_3_Sphere_3.h c2d1adf 2021-06-23T17:34:48+02:00 Mael Rouxel-Labbé
// SPDX-License-Identifier: LGPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Sebastien Loriot
//

#ifndef CGAL_INTERSECTIONS_3_BBOX_3_SPHERE_3_H
#define CGAL_INTERSECTIONS_3_BBOX_3_SPHERE_3_H

#include <CGAL/Intersections_3/internal/Bbox_3_Sphere_3_do_intersect.h>

#include <CGAL/Bbox_3.h>
#include <CGAL/Sphere_3.h>

namespace CGAL {

template<typename K>
bool do_intersect(const CGAL::Bbox_3& box,
                  const Sphere_3<K>& s)
{
  return K().do_intersect_3_object()(box, s);
}

template<typename K>
bool do_intersect(const Sphere_3<K>& s,
                  const CGAL::Bbox_3& box)
{
  return K().do_intersect_3_object()(s, box);
}

} // namespace CGAL

#endif // CGAL_INTERSECTIONS_3_BBOX_3_SPHERE_3_H
