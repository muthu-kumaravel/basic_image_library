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

#######
# Set necessary flags
######
if(WIN32)
elseif(WIN32)
set(CXX_FLAGS "")
set(CMAKE_CXX_FLAGS_DEBUG "-g -std=gnu++11")
set(CMAKE_BUILD_TYPE "Release")
endif(WIN32)
if(APPLE)
  set(CMAKE_CXX_FLAGS_RELEASE  "-O3 -std=gnu++11")
elseif(UNIX)
  set(CMAKE_CXX_FLAGS_RELEASE  "-O3 -std=gnu++11 -fopenmp")
endif()

if(WIN32)
  if(DEBUG)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MDd")
  else(DEBUG)
    set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
  endif(DEBUG)
endif(WIN32)

######
# Identify system architecture
#####
if(UNIX)
  EXECUTE_PROCESS( COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE )
elseif(WIN32)
  set(ARCHITECTURE "x86_64")
endif()

#######
# Set essential flags for DEBUG build
######
if (DEBUG)
  set(CMAKE_VERBOSE_MAKEFILE ON)
  add_definitions(-DBIL_DEBUG=1)
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG}")
else (DEBUG)
  MESSAGE( STATUS "variable is: " ${CXX_FLAGS} )
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE}")
endif (DEBUG)

#####
# Include directories
#####
include_directories("${PROJECT_SOURCE_DIR}/../main_code/includes/core"
                    "${PROJECT_SOURCE_DIR}/../main_code/includes/basic_functions"
                    "${PROJECT_SOURCE_DIR}/../main_code/includes/math_functions"
                    "${PROJECT_SOURCE_DIR}/../main_code/includes/adobe_functions")

#####
# Set Basic Image library path
#####
if (WIN32)
  if(DEBUG)  
    set(BASIC_IMAGE_LIB "${PROJECT_SOURCE_DIR}/../lib/Debug/basic_image_core.lib")
  else(DEBUG)  
    set(BASIC_IMAGE_LIB "${PROJECT_SOURCE_DIR}/../lib/Release/basic_image_core.lib")
  endif(DEBUG)
else (WIN32)
  if(DEBUG)  
    set(BASIC_IMAGE_LIB ${PROJECT_SOURCE_DIR}/../lib/Debug/libbasic_image.a)
  else(DEBUG)  
  set(BASIC_IMAGE_LIB ${PROJECT_SOURCE_DIR}/../lib/Release/libbasic_image.a)
  endif(DEBUG)
endif (WIN32)


#####
# Build Basic Image sample app
#####
if (WIN32)
  set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
elseif (UNIX AND NOT APPLE)
  if(DEBUG)
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/Debug)
  else(DEBUG)  
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/Release)
  endif(DEBUG)
elseif (APPLE)
  if(DEBUG)
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/Debug)
  else(DEBUG)  
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/Release)
  endif(DEBUG)
endif (WIN32)
add_executable(basic_image_demo ${PROJECT_SOURCE_DIR}/basic_image_demo.cpp)

if (WIN32)
  target_link_libraries(basic_image_demo ${BASIC_IMAGE_LIB})
elseif (UNIX AND NOT APPLE)
  target_link_libraries(basic_image_demo  ${BASIC_IMAGE_LIB} ${UTIL_LIBRARIES})
elseif (APPLE)
  target_link_libraries(basic_image_demo ${BASIC_IMAGE_LIB} ${CMAKE_THREAD_LIBS_INIT})
endif (WIN32)
set_target_properties(basic_image_demo PROPERTIES COMPILE_FLAGS "${CXX_FLAGS} ${CUDA_NVCC_FLAGS}")
target_link_libraries(basic_image_demo  ${BASIC_IMAGE_LIB})
###############################################################################