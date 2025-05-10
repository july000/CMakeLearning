add_subdirectory(add)

include_directories(./bin)
link_directories(./bin)
add_executable(lesson2_2 main.cpp)
target_link_libraries(lesson2_2 add_shared.dll)