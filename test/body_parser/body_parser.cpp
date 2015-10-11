#include <boost/test/unit_test.hpp>
#include <cinatra/body_parser.hpp>

using namespace cinatra;

BOOST_AUTO_TEST_CASE(urlencoded_body_parser_test)
{
    CaseMap cm = urlencoded_body_parser("k%261=v%3d1%26k%262=v%3d2");
    BOOST_CHECK(cm["k&1"] == "v=1");
    BOOST_CHECK(cm["k&2"] == "v=2");
}