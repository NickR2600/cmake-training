cmake_minimum_required(VERSION 3.9.1)

project(greetingTest)

#add_executable(greeting main.cpp greeting.cpp)
add_library(greeting-1.0.0 STATIC greeting.cpp)