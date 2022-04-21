cmake_minimum_required(VERSION 3.9.1)
project(contumerTest VERSION 1.0.0)

add_executable(consumer main.cpp)
target_link_libraries(consumer ${CMAKE_CURRENT_LIST_DIR}/libgreeting/greeting.lib)