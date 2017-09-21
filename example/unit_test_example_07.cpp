//  (C) Copyright Gennadiy Rozental 2005-2014.
//  Distributed under the Boost Software License, Version 1.0.
//  (See accompanying file LICENSE_1_0.txt or copy at 
//  http://www.boost.org/LICENSE_1_0.txt)

//  See http://www.boost.org/libs/test for the library home page.

// Boost.Test
#define BOOST_TEST_MAIN
#define BOOST_TEST_MODULE Unit_test_example_07
#include <boost/test/unit_test.hpp>
#include <boost/mpl/list.hpp>

//____________________________________________________________________________//

//struct F {
//    F() : i( 9 ) { BOOST_TEST_MESSAGE( "setup fixture" ); }
//    ~F()         { BOOST_TEST_MESSAGE( "teardown fixture" ); }
//
//    int i;
//};

//____________________________________________________________________________//

//BOOST_FIXTURE_TEST_SUITE( s, F )

//BOOST_AUTO_TEST_SUITE(Suite)

typedef boost::mpl::list<char,int const,float,const double> test_types;

BOOST_AUTO_TEST_CASE_TEMPLATE( my_test, T, test_types )
{
    T t = static_cast<T>(4);

    BOOST_TEST( (t*t+t)/10 == 9 );
}

//BOOST_AUTO_TEST_SUITE_END()

//____________________________________________________________________________//

// EOF
