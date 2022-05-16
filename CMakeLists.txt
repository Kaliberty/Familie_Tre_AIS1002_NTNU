cmake_minimum_required(VERSION 3.21)
project(FamilyTree)

set(CMAKE_CXX_STANDARD 17)

add_executable(FamilyTree main.cpp)
target_link_libraries(FamilyTree PUBLIC family-tree)

add_subdirectory(src)
enable_testing()
add_subdirectory(Test)