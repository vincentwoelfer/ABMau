cmake_minimum_required(VERSION 3.16)
project(abmau)

set(CMAKE_CXX_STANDARD 20)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Wconversion")

# Find all project files
file(GLOB SOURCES
		include/*.h
		src/*.cpp
		main.cpp
)

add_executable(abmau ${SOURCES})

target_include_directories(abmau PRIVATE include)

