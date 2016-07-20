cmake_minimum_required (VERSION 2.8) 
project (CMakeTests) 

add_definitions(-std=c++11)

#
# Application
#

add_executable(sqr main.cpp sqr.cpp)

#
# Testing
#
find_package (Boost COMPONENTS system filesystem unit_test_framework REQUIRED)
include_directories (${Boost_INCLUDE_DIRS})
add_definitions (-DBOOST_TEST_DYN_LINK)

add_executable (sqr_test sqr_test.cpp sqr.cpp)
target_link_libraries (sqr_test ${Boost_LIBRARIES})

enable_testing()
add_test (NAME sqr_test COMMAND sqr_test)
