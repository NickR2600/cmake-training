cmake_minimum_required(VERSION 3.9.1)
project(songTest VERSION 1.0.0)

add_library(secondDay secondDay.cpp)
target_include_directories(secondDay PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)
target_link_libraries(secondDay PUBLIC firstDay)