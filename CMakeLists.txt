cmake_minimum_required(VERSION 3.0)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(navilib)
file(GLOB_RECURSE navlib_SOURCES "lib/*.cpp")
file(GLOB_RECURSE navlib_HEADERS "lib/*.hpp")

set (navlib_INCLUDE_DIRS "")
foreach (_headerFile ${navlib_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND navlib_INCLUDE_DIRS ${_dir})
endforeach()
list(REMOVE_DUPLICATES navlib_INCLUDE_DIRS)

add_executable ("${PROJECT_NAME}" airsim_app/main.cpp ${navlib_SOURCES})
target_include_directories("${PROJECT_NAME}" PRIVATE ${navlib_INCLUDE_DIRS})
install(TARGETS "${PROJECT_NAME}" DESTINATION bin)
