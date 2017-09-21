cmake_minimum_required(VERSION 3.8)
project(BoostUnitTest)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

add_definitions(-DBOOST_TEST_DYN_LINK)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

add_executable(BoostUnitTest main.cpp include/my_class.cpp)
target_link_libraries(BoostUnitTest ${Boost_LIBRARIES})

#enable_testing()
#ADD_TEST (UnitTests UnitTests)