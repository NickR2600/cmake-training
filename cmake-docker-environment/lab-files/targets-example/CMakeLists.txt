cmake_minimum_required(VERSION 3.9.1)
project(songTest VERSION 1.0.0)

add_library(firstDay SHARED firstDay/firstDay.cpp)

add_library(secondDay SHARED secondDay/secondDay.cpp)
target_include_directories(secondDay PUBLIC ${CMAKE_CURRENT_LIST_DIR}/firstDay/include)
target_link_libraries(secondDay INTERFACE firstDay)

add_executable(song main.cpp)
target_include_directories(song PUBLIC ${CMAKE_CURRENT_LIST_DIR}/secondDay/include/)
#target_include_directories(song PRIVATE ${CMAKE_CURRENT_LIST_DIR}/firstDay)
target_link_libraries(song PUBLIC secondDay)