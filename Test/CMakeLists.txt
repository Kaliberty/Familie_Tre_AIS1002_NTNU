
include_directories("${CMAKE_SOURCE_DIR}/src")

add_executable(testPerson testPerson.cpp)
add_test(NAME testPerson COMMAND testPerson)