#include <my_class.hpp>

#define BOOST_TEST_MODULE MyTest
#define BOOST_TEST_MAIN
//#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>


BOOST_AUTO_TEST_CASE( my_test )
{
    my_class test_object( "qwerty" );

//    BOOST_CHECK( test_object.is_valid() );
}

#define BOOST_TEST_MODULE MyTest2
int add( int i, int j ) { return i+j; }

BOOST_AUTO_TEST_CASE( my_test2 )
{
    // seven ways to detect and report the same error:
    BOOST_CHECK( add( 2,2 ) == 4 );        // #1 continues on error

    BOOST_REQUIRE( add( 2,2 ) == 4 );      // #2 throws on error

    if( add( 2,2 ) != 4 )
        BOOST_ERROR( "Ouch..." );            // #3 continues on error

    if( add( 2,2 ) != 4 )
        BOOST_FAIL( "Ouch..." );             // #4 throws on error

    if( add( 2,2 ) != 4 ) throw "Ouch..."; // #5 throws on error

    BOOST_CHECK_MESSAGE( add( 2,2 ) == 4,  // #6 continues on error
                         "add(..) result: " << add( 2,2 ) );

    BOOST_CHECK_EQUAL( add( 2,2 ), 4 );	  // #7 continues on error
}

/*begin manual*/

/*
using namespace boost::unit_test;

void free_test_function()
{
    BOOST_TEST( true */
/* test assertion *//*
 );
}

test_suite* init_unit_test_suite( int */
/*argc*//*
, char* */
/*argv*//*
[] )
{
    framework::master_test_suite().
            add( BOOST_TEST_CASE( &free_test_function ) );

    return 0;
}

*/
/*end manual*//*


BOOST_DATA_TEST_CASE(test_case_name, dataset)
{
BOOST_TEST(sample != 0);
}*/
