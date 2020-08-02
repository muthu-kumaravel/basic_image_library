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
option(DEBUG "Build Basic Image Library in DEBUG mode" OFF)
option(PROFILE_TIME "Profile execution time" OFF)

#######
# Set necessary flags
######
set(CXX_FLAGS "")
set(CMAKE_CXX_FLAGS          "-fPIC")
set(CMAKE_CXX_FLAGS_DEBUG    "-g -std=c++11")
set(CMAKE_CXX_FLAGS_RELEASE  "-O3 -std=c++11")
set(CMAKE_BUILD_TYPE "Release")

######
# Identify system architecture
#####
if(UNIX)
  EXECUTE_PROCESS( COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCHITECTURE )
elseif(WIN32)
  set(ARCHITECTURE "x86_64")
endif()

if(WIN32)
  set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
  set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
endif(WIN32)

#######
# Set essential flags for DEBUG build
######
if (DEBUG)
  set(CMAKE_VERBOSE_MAKEFILE ON)
  add_definitions(-DFR_DEBUG=1)
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_DEBUG}")
else (DEBUG)
  MESSAGE( STATUS "variable is: " ${CXX_FLAGS} )
  set(CXX_FLAGS "${CXX_FLAGS} ${CMAKE_CXX_FLAGS} ${CMAKE_CXX_FLAGS_RELEASE}")
endif (DEBUG)

#######
# Profile exec time in Basic Image Library pipeline
######
if (PROFILE_TIME)
  add_definitions(-DPROFILE_TIME=1)
endif (PROFILE_TIME)

#####
# Include directories
#####
include_directories("${PROJECT_SOURCE_DIR}/includes/core"
                    "${PROJECT_SOURCE_DIR}/includes/basic_functions"
                    "${PROJECT_SOURCE_DIR}/includes/math_functions")

#####
# Source files
#####
file(GLOB SRC_FILES "${PROJECT_SOURCE_DIR}/src/basic_functions/*.cpp"
                    "${PROJECT_SOURCE_DIR}/src/math_functions/*.cpp")

#####
# Set Basic Image library generation path
#####
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)

#####
# Build Basic Image core library
#####
add_library(basic_image_core STATIC ${SRC_FILES})

#####
# Link dependency libs with basic image lib
#####
set(BASIC_IMAGE_CORE ${LIBRARY_OUTPUT_PATH}/libbasic_image_core.a)

#####
# Build Basic Image library with all its dependencies linked statically
#####
if (WIN32)
  set_target_properties(basic_image_core PROPERTIES COMPILE_FLAGS "${CXX_FLAGS}")
elseif (UNIX AND NOT APPLE AND NOT ${ARCHITECTURE} STREQUAL "aarch64")
  set_target_properties(basic_image_core PROPERTIES COMPILE_FLAGS "${CXX_FLAGS}")
  add_custom_command(OUTPUT ${LIBRARY_OUTPUT_PATH}/libbasic_image.a
                      COMMAND ar ARGS -x ${BASIC_IMAGE_CORE}
                      COMMAND rm ARGS -f ${BASIC_IMAGE_CORE}
                      COMMAND ar ARGS -r ${LIBRARY_OUTPUT_PATH}/libbasic_image.a *.o
                      COMMAND rm ARGS -f *.o
                      DEPENDS "basic_image_core")

  add_custom_target(basic_image ALL DEPENDS ${LIBRARY_OUTPUT_PATH}/libbasic_image.a)
elseif(APPLE OR ${ARCHITECTURE} STREQUAL "aarch64")
  add_library(basic_image STATIC ${SRC_FILES})
endif()
###############################################################################