cmake_minimum_required (VERSION 3.5.0)

#######
# Project name & version
######
project (BasicImageLibrary)

#######
# Define user options
######
option(DEBUG "Build Basic Image sample app in DEBUG mode" OFF)

#######
# Set necessary flags
######
set(CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-g -std=gnu++11")
set(CMAKE_BUILD_TYPE "Release")

#######
# Basic Image sample app in DEBUG mode
######
if (DEBUG)
  add_definitions(-DFR_DEBUG=1)
  set(CMAKE_VERBOSE_MAKEFILE ON)
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG}")
else (DEBUG)
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE}")
endif (DEBUG)

#####
# Include directories
#####
include_directories("${PROJECT_SOURCE_DIR}/../main_code/includes")

#####
# Set Basic Image library path
#####
set(BASIC_IMAGE_LIB ${PROJECT_SOURCE_DIR}/../lib/libbasic_image.a)

#####
# Build Basic Image sample app
#####
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(basic_image_demo ${PROJECT_SOURCE_DIR}/basic_image_demo.cpp)

set_target_properties(basic_image_demo PROPERTIES COMPILE_FLAGS "${CXX_FLAGS} ${CUDA_NVCC_FLAGS}")
target_link_libraries(basic_image_demo  ${BASIC_IMAGE_LIB})
###############################################################################