set(BINDINGS _dtcc_tudelft_city3d)

set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/cpp/)

pybind11_add_module(${BINDINGS} ${SRC_DIR}/dtcc_tudelft_city3d.cpp)

target_compile_definitions(${BINDINGS} PRIVATE -DTRILIBRARY -DANSI_DECLARATORS)
target_link_libraries(${BINDINGS} PRIVATE basic math model method)

if(WIN32)
    target_compile_definitions(${BINDINGS} PRIVATE -DNO_TIMER)
endif()

if(APPLE)
    set_target_properties(${MODULE} PROPERTIES LINK_FLAGS "-undefined dynamic_lookup")
endif(APPLE)

add_subdirectory(${SRC_DIR}/City3D)

install(TARGETS ${BINDINGS} DESTINATION dtcc_tudelft_city3d)
