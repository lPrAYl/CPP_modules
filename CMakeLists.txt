cmake_minimum_required(VERSION 3.22)

project(cmake_example)  #   project name

#   set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_CXX_STANDARD)

#   set(CMAKE_CXX_STANDARD 11)
#   or
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++98")    #   c++

#	set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")          #   c

#   add_definitions(-Wall -O2)
#   or
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall -O2")

#   set(SOURCES main.cpp)
#   or
file(GLOB
        CPP "module00/ex01/*.cpp")

include_directories("${PROJECT_SOURCE_DIR}/include")

#   add_executable(${PROJECT_NAME} main.cpp)
#   or
#   add_executable(${PROJECT_NAME} ${SOURCES})
#   or
add_executable(${PROJECT_NAME} ${CPP})
