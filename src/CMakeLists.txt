add_subdirectory(math)
add_subdirectory(debug)
add_subdirectory(materials)
add_subdirectory(primatives)
add_subdirectory(renderer)

add_executable(jtracer main.cpp)

target_link_libraries(jtracer lib-math)
target_link_libraries(jtracer lib-debug)
target_link_libraries(jtracer lib-materials)
target_link_libraries(jtracer lib-materials-microfacets)
target_link_libraries(jtracer lib-materials-fresnels)
target_link_libraries(jtracer lib-primatives)
target_link_libraries(jtracer lib-renderer)