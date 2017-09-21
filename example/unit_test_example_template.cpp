//
// Created by Maria Baburina on 21/09/2017.
//

#include <boost/test/unit_test.hpp>
#include <boost/mpl/list.hpp>

typedef boost::mpl::list<int,long,unsigned char> test_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( my_test, T, test_types )
{
    BOOST_TEST( sizeof(T) == (unsigned)4 );
}