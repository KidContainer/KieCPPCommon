cmake_minimum_required(VERSION 3.15)
project(kie_common CXX)

add_library(kie_common src/kie_common.cpp)
target_include_directories(kie_common PUBLIC include)

set_target_properties(kie_common PROPERTIES PUBLIC_HEADER "include/kie_common.h")
install(TARGETS kie_common)
