#define BOOST_TEST_MODULE decorator_05
#include <boost/test/unit_test.hpp>
namespace utf = boost::unit_test;

BOOST_AUTO_TEST_SUITE(suite1, * utf::disabled())

    BOOST_AUTO_TEST_CASE(test1)
    {
        BOOST_TEST(1 != 1);
    }

    BOOST_AUTO_TEST_CASE(test2, * utf::enabled())
    {
        BOOST_TEST(2 != 2);
    }

BOOST_AUTO_TEST_SUITE_END()

