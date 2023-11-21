cmake_minimum_required(VERSION 3.26)
project(main)

add_executable(main main.cpp)
add_subdirectory(table2)
add_subdirectory(table3)
add_subdirectory(table4)
add_subdirectory(table5)

target_link_libraries(main table2 table3 table4 table5)