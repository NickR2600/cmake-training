cmake_minimum_required(VERSION 3.9.1)

project(contumerTest)

add_executable(consumer main.cpp)
target_link_libraries(consumer ${CMAKE_BINARY_DIR}/../dependencies/libgreeting/lib/libgreeting-1.0.0.a)