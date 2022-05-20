add_library(family-tree person.cpp)
add_library(UI UserInterface.cpp)

target_include_directories(family-tree PUBLIC ${CMAKE_SOURCE_DIR}/include/family-tree)
target_include_directories(UI PUBLIC ${CMAKE_SOURCE_DIR}/include/UI)

