// Copyright (c) 1997  Max-Planck-Institute Saarbruecken (Germany).
// All rights reserved.
//
// This file is part of CGAL (www.cgal.org).
//
// $URL: https://github.com/CGAL/cgal/blob/v5.4.5/Partition_2/include/CGAL/Partition_2/partition_assertions.h $
// $Id: partition_assertions.h 5a36ff8 2020-12-04T08:02:26+00:00 Giles Bathgate
// SPDX-License-Identifier: GPL-3.0-or-later OR LicenseRef-Commercial
//
//
// Author(s)     : Geert-Jan Giezeman, Sven Schoenherr
//
// Generated from script create_assertions.sh


// Note that this header file is intentionnaly not protected with a
// macro (as <cassert>). Calling it a second time with another value
// for CGAL_NO_ASSERTIONS for example must make a difference.

#include <CGAL/assertions.h>

// macro definitions
// =================
// assertions
// ----------

#undef CGAL_partition_assertion
#undef CGAL_partition_assertion_msg
#undef CGAL_partition_assertion_code

#if defined(CGAL_PARTITION_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS)
#  define CGAL_partition_assertion(EX) (static_cast<void>(0))

#include <CGAL/license/Partition_2.h>

#  define CGAL_partition_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_assertion_code(CODE)
#else
#  define CGAL_partition_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_assertion_code(CODE) CODE
#  define CGAL_partition_assertions 1
#endif // CGAL_PARTITION_NO_ASSERTIONS


#undef CGAL_partition_exactness_assertion
#undef CGAL_partition_exactness_assertion_msg
#undef CGAL_partition_exactness_assertion_code

#if defined(CGAL_PARTITION_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_partition_exactness_assertion(EX) (static_cast<void>(0))
#  define CGAL_partition_exactness_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_exactness_assertion_code(CODE)
#else
#  define CGAL_partition_exactness_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_exactness_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_exactness_assertion_code(CODE) CODE
#  define CGAL_partition_exactness_assertions 1
#endif // CGAL_PARTITION_NO_ASSERTIONS


#undef CGAL_partition_expensive_assertion
#undef CGAL_partition_expensive_assertion_msg
#undef CGAL_partition_expensive_assertion_code

#if defined(CGAL_PARTITION_NO_ASSERTIONS) \
  || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_assertion(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_assertion_code(CODE)
#else
#  define CGAL_partition_expensive_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_assertion_code(CODE) CODE
#  define CGAL_partition_expensive_assertions 1
#endif // CGAL_PARTITION_NO_ASSERTIONS


#undef CGAL_partition_expensive_exactness_assertion
#undef CGAL_partition_expensive_exactness_assertion_msg
#undef CGAL_partition_expensive_exactness_assertion_code

#if defined(CGAL_PARTITION_NO_ASSERTIONS) || defined(CGAL_NO_ASSERTIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_exactness_assertion(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_assertion_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_assertion_code(CODE)
#else
#  define CGAL_partition_expensive_exactness_assertion(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_exactness_assertion_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::assertion_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_exactness_assertion_code(CODE) CODE
#  define CGAL_partition_expensive_exactness_assertions 1
#endif // CGAL_PARTITION_NO_ASSERTIONS


// preconditions
// -------------

#undef CGAL_partition_precondition
#undef CGAL_partition_precondition_msg
#undef CGAL_partition_precondition_code

#if defined(CGAL_PARTITION_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS)
#  define CGAL_partition_precondition(EX) (static_cast<void>(0))
#  define CGAL_partition_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_precondition_code(CODE)
#else
#  define CGAL_partition_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_precondition_code(CODE) CODE
#  define CGAL_partition_preconditions 1
#endif // CGAL_PARTITION_NO_PRECONDITIONS


#undef CGAL_partition_exactness_precondition
#undef CGAL_partition_exactness_precondition_msg
#undef CGAL_partition_exactness_precondition_code

#if defined(CGAL_PARTITION_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_partition_exactness_precondition(EX) (static_cast<void>(0))
#  define CGAL_partition_exactness_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_exactness_precondition_code(CODE)
#else
#  define CGAL_partition_exactness_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_exactness_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_exactness_precondition_code(CODE) CODE
#  define CGAL_partition_exactness_preconditions 1
#endif // CGAL_PARTITION_NO_PRECONDITIONS


#undef CGAL_partition_expensive_precondition
#undef CGAL_partition_expensive_precondition_msg
#undef CGAL_partition_expensive_precondition_code

#if defined(CGAL_PARTITION_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_precondition(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_precondition_code(CODE)
#else
#  define CGAL_partition_expensive_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_precondition_code(CODE) CODE
#  define CGAL_partition_expensive_preconditions 1
#endif // CGAL_PARTITION_NO_PRECONDITIONS


#undef CGAL_partition_expensive_exactness_precondition
#undef CGAL_partition_expensive_exactness_precondition_msg
#undef CGAL_partition_expensive_exactness_precondition_code

#if defined(CGAL_PARTITION_NO_PRECONDITIONS) || defined(CGAL_NO_PRECONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_exactness_precondition(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_precondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_precondition_code(CODE)
#else
#  define CGAL_partition_expensive_exactness_precondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_exactness_precondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::precondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_exactness_precondition_code(CODE) CODE
#  define CGAL_partition_expensive_exactness_preconditions 1
#endif // CGAL_PARTITION_NO_PRECONDITIONS


// postconditions
// --------------

#undef CGAL_partition_postcondition
#undef CGAL_partition_postcondition_msg
#undef CGAL_partition_postcondition_code

#if defined(CGAL_PARTITION_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS)
#  define CGAL_partition_postcondition(EX) (static_cast<void>(0))
#  define CGAL_partition_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_postcondition_code(CODE)
#else
#  define CGAL_partition_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_postcondition_code(CODE) CODE
#  define CGAL_partition_postconditions 1
#endif // CGAL_PARTITION_NO_POSTCONDITIONS


#undef CGAL_partition_exactness_postcondition
#undef CGAL_partition_exactness_postcondition_msg
#undef CGAL_partition_exactness_postcondition_code

#if defined(CGAL_PARTITION_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_partition_exactness_postcondition(EX) (static_cast<void>(0))
#  define CGAL_partition_exactness_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_exactness_postcondition_code(CODE)
#else
#  define CGAL_partition_exactness_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_exactness_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_exactness_postcondition_code(CODE) CODE
#  define CGAL_partition_exactness_postconditions 1
#endif // CGAL_PARTITION_NO_POSTCONDITIONS


#undef CGAL_partition_expensive_postcondition
#undef CGAL_partition_expensive_postcondition_msg
#undef CGAL_partition_expensive_postcondition_code

#if defined(CGAL_PARTITION_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_postcondition(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_postcondition_code(CODE)
#else
#  define CGAL_partition_expensive_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_postcondition_code(CODE) CODE
#  define CGAL_partition_expensive_postconditions 1
#endif // CGAL_PARTITION_NO_POSTCONDITIONS


#undef CGAL_partition_expensive_exactness_postcondition
#undef CGAL_partition_expensive_exactness_postcondition_msg
#undef CGAL_partition_expensive_exactness_postcondition_code

#if defined(CGAL_PARTITION_NO_POSTCONDITIONS) || defined(CGAL_NO_POSTCONDITIONS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_exactness_postcondition(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_postcondition_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_postcondition_code(CODE)
#else
#  define CGAL_partition_expensive_exactness_postcondition(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_exactness_postcondition_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::postcondition_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_exactness_postcondition_code(CODE) CODE
#  define CGAL_partition_expensive_exactness_postconditions 1
#endif // CGAL_PARTITION_NO_POSTCONDITIONS


// warnings
// --------

#undef CGAL_partition_warning
#undef CGAL_partition_warning_msg
#undef CGAL_partition_warning_code

#if defined(CGAL_PARTITION_NO_WARNINGS) || defined(CGAL_NO_WARNINGS)
#  define CGAL_partition_warning(EX) (static_cast<void>(0))
#  define CGAL_partition_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_warning_code(CODE)
#else
#  define CGAL_partition_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_warning_code(CODE) CODE
#  define CGAL_partition_warnings 1
#endif // CGAL_PARTITION_NO_WARNINGS


#undef CGAL_partition_exactness_warning
#undef CGAL_partition_exactness_warning_msg
#undef CGAL_partition_exactness_warning_code

#if defined(CGAL_PARTITION_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))
#  define CGAL_partition_exactness_warning(EX) (static_cast<void>(0))
#  define CGAL_partition_exactness_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_exactness_warning_code(CODE)
#else
#  define CGAL_partition_exactness_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_exactness_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_exactness_warning_code(CODE) CODE
#  define CGAL_partition_exactness_warnings 1
#endif // CGAL_PARTITION_NO_WARNINGS


#undef CGAL_partition_expensive_warning
#undef CGAL_partition_expensive_warning_msg
#undef CGAL_partition_expensive_warning_code

#if defined(CGAL_PARTITION_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_warning(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_warning_code(CODE)
#else
#  define CGAL_partition_expensive_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_warning_code(CODE) CODE
#  define CGAL_partition_expensive_warnings 1
#endif // CGAL_PARTITION_NO_WARNINGS


#undef CGAL_partition_expensive_exactness_warning
#undef CGAL_partition_expensive_exactness_warning_msg
#undef CGAL_partition_expensive_exactness_warning_code

#if defined(CGAL_PARTITION_NO_WARNINGS) || defined(CGAL_NO_WARNINGS) \
  || (!defined(CGAL_PARTITION_CHECK_EXACTNESS) && !defined(CGAL_CHECK_EXACTNESS))\
  || (!defined(CGAL_PARTITION_CHECK_EXPENSIVE) && !defined(CGAL_CHECK_EXPENSIVE))
#  define CGAL_partition_expensive_exactness_warning(EX) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_warning_msg(EX,MSG) (static_cast<void>(0))
#  define CGAL_partition_expensive_exactness_warning_code(CODE)
#else
#  define CGAL_partition_expensive_exactness_warning(EX) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__))
#  define CGAL_partition_expensive_exactness_warning_msg(EX,MSG) \
   (CGAL::possibly(EX)?(static_cast<void>(0)): ::CGAL::warning_fail( # EX , __FILE__, __LINE__, MSG))
#  define CGAL_partition_expensive_exactness_warning_code(CODE) CODE
#  define CGAL_partition_expensive_exactness_warnings 1
#endif // CGAL_PARTITION_NO_WARNINGS
