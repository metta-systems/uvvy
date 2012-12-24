#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE Test_base32
#include <boost/test/unit_test.hpp>

#include "base32.h"

// Sources lengths must be in integer multiples of 5.
BOOST_AUTO_TEST_CASE(tobase32_string)
{
	QByteArray hello("hello");
    BOOST_CHECK(Encode::toBase32(hello) == "NBSWY3DP");
    BOOST_CHECK(Encode::fromBase32("NBSWY3DP") == hello);
}

BOOST_AUTO_TEST_CASE(tobase32_binary)
{
	const char data[] = {44, 108, 7, 209, 128, 95, 189, 183, 211, 83, 165, 192, 115, 212, 246, 46, 79, 111, 60, 245};
	QByteArray binary = QByteArray::fromRawData(data, sizeof(data));
    BOOST_CHECK(Encode::toBase32(binary) == "FRWAPUMAL663PU2TUXAHHVHWFZHW6PHV");
    BOOST_CHECK(Encode::fromBase32("FRWAPUMAL663PU2TUXAHHVHWFZHW6PHV") == binary);
}
