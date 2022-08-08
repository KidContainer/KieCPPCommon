cmake_minimum_required(VERSION 3.15)
project(kie_common CXX)

set(CMAKE_CXX_STANDARD 20)

add_library(kie_common)
target_include_directories(kie_common PUBLIC include)

add_subdirectory(src)

install(TARGETS kie_common)
install(DIRECTORY include/ DESTINATION include)
install(FILES LICENSE DESTINATION license)