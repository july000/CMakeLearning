add_subdirectory(add)

include_directories(./lib)
# link_libraries(add_static)
link_directories(./lib)
add_executable(lesson2_1 main.cpp)
target_link_libraries(lesson2_1 add_static.lib)
