#define BOOST_TEST_MODULE sqr_test
#include <boost/test/unit_test.hpp>

#include "sqr.h"

BOOST_AUTO_TEST_CASE(FailTest)
{
      BOOST_CHECK_EQUAL(5, ms::sqr(2));
}

BOOST_AUTO_TEST_CASE(PassTest)
{
      BOOST_CHECK_EQUAL(4, ms::sqr(2));
}
