cmake_minimum_required(VERSION 3.11 FATAL_ERROR)

project(wndlib C CXX)

if(APPLE)
    enable_language(OBJC)
endif()

option(BUILD_SAMPLE "Build sample" ON)

##########################
# WNDLIB

add_library(wndlib STATIC)

target_include_directories(wndlib PUBLIC "${CMAKE_SOURCE_DIR}/include")

if (WIN32)
	target_sources(wndlib PRIVATE "${CMAKE_SOURCE_DIR}/src/wndlib_win32.cpp")
endif()

##########################
# SAMPLE

if (BUILD_SAMPLE)
	add_executable(hello_window "${CMAKE_SOURCE_DIR}/sample/hello_window.cpp")
	target_link_libraries(hello_window wndlib)
endif()

##########################
