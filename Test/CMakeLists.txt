#include_directories("${CMAKE_SOURCE_DIR}/src")

add_executable(testPerson testPerson.cpp)



target_link_libraries(testPerson PUBLIC family-tree)



#add_test(NAME testPerson COMMAND testPerson)