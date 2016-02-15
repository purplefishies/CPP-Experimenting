#
# Simple C++ build example
# 

cmake_minimum_required(VERSION 2.8)

set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/CMakeScripts)
include(build_samples)
find_package( GTest )
enable_testing()

set(SOURCES Car.cpp )
set(WRAP_SOURCES Intercept.cpp )
set(GTESTING_FILES Car.cpp )

add_library( wraptest SHARED ${SOURCES} )
target_link_libraries( wraptest gtest )

add_library(intercept SHARED ${WRAP_SOURCES} )
target_link_libraries( intercept dl )

add_executable( simpletest simpletest.cpp  )
target_link_libraries( simpletest wraptest )



set(LIBS wraptest)

if( GTEST_FOUND )
  foreach( gtest_file ${GTESTING_FILES} ) 
    build_gtest_test_file( wraptest ${gtest_file} "-DSELF_TEST" ${LIBS} )
  endforeach( gtest_file )
endif( GTEST_FOUND )
