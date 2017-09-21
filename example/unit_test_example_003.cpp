//#define BOOST_TEST_ALTERNATIVE_INIT_API
#define BOOST_TEST_MAIN
#include <boost/test/unit_test.hpp>
//#include <boost/test/included/unit_test.hpp>
//#include <boost/test/data/test_case.hpp>

using namespace boost::unit_test;

BOOST_AUTO_TEST_SUITE(ParentSuite)

BOOST_AUTO_TEST_CASE(test_case_1) {
    BOOST_TEST_MESSAGE("Test1");

    BOOST_TEST(false);
}

BOOST_AUTO_TEST_CASE(test_case_2) {
    BOOST_TEST_MESSAGE("Test2");

    BOOST_TEST(true);
}

BOOST_AUTO_TEST_SUITE_END()

/*manual test case*/

/*
void manual_test_function()
{
}

bool init_unit_test() {
    test_unit_id id = framework::master_test_suite().get("ParentSuite");
    framework::master_test_suite().get("ParentSuite");
    test_suite& parent = framework::get<test_suite>(id);
    parent.add(BOOST_TEST_CASE(manual_test_function));
    return true;
}*/
