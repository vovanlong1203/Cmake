cmake_minimum_required(VERSION 3.26)
project(main)

add_executable(main)
target_sources(main PRIVATE "main.cpp")
target_include_directories(main PRIVATE "${PROJECT_SOURCE_DIR}")
add_subdirectory(table2)
add_subdirectory(table3)
add_subdirectory(table4)
add_subdirectory(table5)

install(TARGETS main)
