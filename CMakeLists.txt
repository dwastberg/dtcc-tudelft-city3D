# Project configuration
cmake_minimum_required(VERSION 3.15)
project(dtcc_template)

# Note: To building in Debug mode, use cmake .. -DCMAKE_BUILD_TYPE=Debug

# Set default build type to Release
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
    message(STATUS "Build type not specified, using Release by default")
endif()

message(STATUS "Build type: " ${CMAKE_BUILD_TYPE})

# Set compiler flags
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W3")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /O2")
else()
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-reorder")
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -DLLVM_ENABLE_ASSERTIONS=ON")
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} -O3")
endif()

# Add clang tools
include(cmake/clang-cxx-dev-tools.cmake)

# find_package(foo CONFIG REQUIRED)
# find_package(bar CONFIG REQUIRED)

# Add Python bindings
# # Find pybind11
execute_process(COMMAND python -c "import site; print([s for s in site.getsitepackages() if 'site-packages' in s][0])" OUTPUT_VARIABLE PYTHON_SITE_PACKAGES OUTPUT_STRIP_TRAILING_WHITESPACE)
set(pybind11_DIR ${PYTHON_SITE_PACKAGES}/pybind11/share/cmake/pybind11)

set(PYBIND11_FINDPYTHON ON)
message("Pybind11 DIR " ${pybind11_DIR})
find_package(pybind11 REQUIRED)

#
set(CGAL_PATH ${CMAKE_SOURCE_DIR}/src/cpp/external/CGAL-5.4.5)

# Add path to local CMake scripts
# Set cmake directories
# list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
list(APPEND CMAKE_MODULE_PATH "${CGAL_PATH}/cmake")
list(APPEND CMAKE_PREFIX_PATH "${CGAL_PATH}/cmake")

message("CMAKE_MODULE_PATH " ${CMAKE_MODULE_PATH})
message("CMAKE_PREFIX_PATH " ${CMAKE_PREFIX_PATH})

# Set include directories
include_directories(${CMAKE_SOURCE_DIR}/src/cpp/include)
include_directories(${CGAL_PATH}/include)
include_directories(${CMAKE_SOURCE_DIR}/src/cpp/City3D/code)

# Set installation directory
set(CMAKE_INSTALL_PREFIX ${CMAKE_SOURCE_DIR}/src)
set(CMAKE_SKIP_INSTALL_ALL_DEPENDENCY true)

add_subdirectory(src)

# Add tests
# ADD_SUBDIRECTORY(tests/cpp)
