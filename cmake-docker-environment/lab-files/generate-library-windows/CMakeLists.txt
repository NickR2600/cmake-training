cmake_minimum_required(VERSION 3.9.1)
project(greetingTest VERSION 1.0.0)
#set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS true)

add_library(greeting SHARED greeting.cpp)
target_compile_definitions(greeting PRIVATE eximValue=1)