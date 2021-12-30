cmake_minimum_required(VERSION 3.22.1)
project(Snake-Game LANGUAGES C CXX)

set(CMAKE_CXX_STANDARD 19)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY              ${CMAKE_SOURCE_DIR}/build                    )
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE      ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/release/bin)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/debug/bin  )

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(Snake-Game src/main.cpp)