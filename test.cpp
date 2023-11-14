#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Hello
#include <boost/test/included/unit_test.hpp>

int substract(int i, int j)
{
    return i-j;
}

BOOST_AUTO_TEST_SUITE(Maths)
BOOST_AUTO_TEST_CASE(substractTest)
{
    BOOST_CHECK(substract(3,3) == 1);
}

BOOST_AUTO_TEST_SUITE_END()

BOOST_AUTO_TEST_SUITE(Physics)

BOOST_AUTO_TEST_CASE(forceTest)
{
    int f = 250;
    int a = 10;
    int b = 25;
    BOOST_CHECK(f+1 == a*b);
}
BOOST_AUTO_TEST_SUITE_END()
