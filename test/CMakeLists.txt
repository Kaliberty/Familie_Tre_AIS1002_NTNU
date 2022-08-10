#include_directories("${CMAKE_SOURCE_DIR}/src")

add_executable(testPerson testPerson.cpp)
add_executable(testTree testTree.cpp)

target_link_libraries(testPerson PUBLIC family-tree)
target_link_libraries(testTree PUBLIC family-tree)

