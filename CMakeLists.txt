cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(navilib)
file(GLOB_RECURSE navlib_SOURCES "NaviLibFiles/*.cpp")
file(GLOB_RECURSE navlib_HEADERS "NaviLibFiles/*.hpp")

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build/bin)

set (navlib_INCLUDE_DIRS "")
foreach (_headerFile ${navlib_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND navlib_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES navlib_INCLUDE_DIRS)

add_executable ("${PROJECT_NAME}" airsim_app/main.cpp ${navlib_SOURCES})
target_include_directories("${PROJECT_NAME}" PRIVATE ${navlib_INCLUDE_DIRS})
install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
