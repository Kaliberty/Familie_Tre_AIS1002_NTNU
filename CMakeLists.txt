cmake_minimum_required(VERSION 3.21)
project(Family-Tree)

set(CMAKE_CXX_STANDARD 17)

add_executable(FamilyTree main.cpp)
target_link_libraries(FamilyTree PUBLIC family-tree UI)

add_subdirectory(src)
enable_testing()
add_subdirectory(build/Test)