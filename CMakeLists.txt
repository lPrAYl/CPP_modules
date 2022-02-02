cmake_minimum_required(VERSION 3.20)

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
        #       module00
        #CPP "module00/ex00/*.cpp"
        #CPP "module00/ex01/*.cpp"
        #CPP "module00/ex02/*.cpp"
        #       module01
        #CPP "module01/ex00/*.cpp"
        #CPP "module01/ex01/*.cpp"
        #CPP "module01/ex02/*.cpp"
        #CPP "module01/ex03/*.cpp"
        #CPP "module01/ex04/*.cpp"
        #CPP "module01/ex05/*.cpp"
        #CPP "module01/ex06/*.cpp"
        #CPP "module02/ex00/*.cpp"
        #CPP "module02/ex01/*.cpp"
        #CPP "module02/ex02/*.cpp"
        #CPP "module02/ex03/*.cpp"
        CPP "module03/ex01/test.cpp"
        )

#include_directories("${PROJECT_SOURCE_DIR}/include")

#   add_executable(${PROJECT_NAME} main.cpp)
#   or
#   add_executable(${PROJECT_NAME} ${SOURCES})
#   or
add_executable(${PROJECT_NAME} ${CPP})
