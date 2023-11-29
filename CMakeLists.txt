cmake_minimum_required(VERSION 3.26)
project(ContenedoresDinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(ContenedoresDinamicos
        main.cpp
)

find_package(Boost REQUIRED)
include_directories(${Boost_INCLUDE_DIRS})
target_link_libraries(ContenedoresDinamicos ${Boost_LIBRARIES})
