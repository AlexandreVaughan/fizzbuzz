#include "gmock/gmock.h"

#include "fizzbuzz.h"

using namespace testing;

namespace fb::tests
{
	TEST(FizzBuzzTests, test_fizzbuzz_1) {
		EXPECT_EQ("1", fb::fizzbuzz(1));
	}
}
