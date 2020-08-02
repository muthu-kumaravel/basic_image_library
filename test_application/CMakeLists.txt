###########################################################################
#   Copyright (C) 2020 MUTHUKUMARAVEL
#   Author             : MUTHUKUMARAVEL 
#   github username    : muthu-kumaravel
#   github email       : muthukumaravel.muthuraman@gmail.com
###########################################################################

cmake_minimum_required (VERSION 3.5.0)

#######
# Project name & version
######
project (BasicImageLibrary)

#######
# Define user options
######
option(DEBUG "Build Basic Image sample app in DEBUG mode" OFF)

######
# Identify system architecture
#####
if(UNIX)
  EXECUTE_PROCESS( COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE )
elseif(WIN32)
  set(ARCHITECTURE "x86_64")
endif()

#######
# Set necessary flags
######
set(CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-g -std=gnu++11")
set(CMAKE_BUILD_TYPE "Release")
if(APPLE)
  set(CMAKE_CXX_FLAGS_RELEASE  "-O3 -std=gnu++11")
else(APPLE)
  set(CMAKE_CXX_FLAGS_RELEASE  "-O3 -std=gnu++11 -fopenmp")
endif()

if(WIN32)
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
endif(WIN32)

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
if (WIN32)
  set(FACE_ANALYTICS_LIB "${PROJECT_SOURCE_DIR}/../../lib/Release/basic_image_core.lib")
else (WIN32)
  set(BASIC_IMAGE_LIB ${PROJECT_SOURCE_DIR}/../lib/libbasic_image.a)
endif (WIN32)


#####
# Build Basic Image sample app
#####
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
add_executable(basic_image_demo ${PROJECT_SOURCE_DIR}/basic_image_demo.cpp)

if (WIN32)
  target_link_libraries(basic_image_demo  ${BASIC_IMAGE_LIB})
elseif (UNIX AND NOT APPLE)
  target_link_libraries(basic_image_demo  ${FACE_ANALYTICS_LIB} ${UTIL_LIBRARIES})
elseif (APPLE)
  set(THREADS_PREFER_PTHREAD_FLAG ON)
  find_package(THREADS REQUIRED)
  target_link_libraries(face_analytics_demo ${FACE_ANALYTICS_LIB} ${CMAKE_THREAD_LIBS_INIT})
endif (WIN32)
set_target_properties(basic_image_demo PROPERTIES COMPILE_FLAGS "${CXX_FLAGS} ${CUDA_NVCC_FLAGS}")
target_link_libraries(basic_image_demo  ${BASIC_IMAGE_LIB})
###############################################################################