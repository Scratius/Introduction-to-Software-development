cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME HelloW)
project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} 
    src/main.cpp
    src/time.h
)
