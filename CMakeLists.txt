cmake_minimum_required(VERSION 3.8)
project(BoostUnitTest)

set(CMAKE_CXX_STANDARD 11)
include_directories(include)

#add_definitions(-DBOOST_TEST_DYN_LINK)
set(Boost_USE_STATIC_LIBS   ON)
find_package(Boost COMPONENTS unit_test_framework REQUIRED)

include_directories(${Boost_INCLUDE_DIR})

add_executable(BoostUnitTest main.cpp)
target_link_libraries(BoostUnitTest ${Boost_LIBRARIES})

file(GLOB EXAMPLES example/unit_test_example_*.cpp)
foreach (EXAMPLE ${EXAMPLES})
    get_filename_component(name ${EXAMPLE} NAME_WE)
    add_executable(${name} ${EXAMPLE})
    target_link_libraries(${name} ${Boost_LIBRARIES})
endforeach ()

message(boot libs ${Boost_LIBRARIES})

#enable_testing()
#ADD_TEST (UnitTests UnitTests)