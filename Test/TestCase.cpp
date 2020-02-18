#include <limits.h>
#include "../Target/sample.h"
#include "gtest/gtest.h"

namespace {

	TEST(덧셈함수테스트, int형넣기) {
		
		EXPECT_EQ(3, Add(1, 2));
	}

	TEST(덧셈함수테스트, float형넣기) {

		EXPECT_EQ(4.0f, Add(1.5f, 2.5f));
	}

	TEST(덧셈함수테스트, double형넣기) {

		EXPECT_EQ(4.0, Add(1.5, 2.5));
	}

	TEST(문자열테스트, 두문자열은같다)
	{
		EXPECT_STREQ("김기섭", "김기섭");
	}

	TEST(문자열테스트, 두문자열은다르다)
	{
		EXPECT_STRNE("김기섭", "킹갓섭");
	}

	TEST(산술연산자, 다르다)
	{
		EXPECT_NE(1, 2);
	}

	TEST(산술연산자, 왼쪽이작다)
	{
		EXPECT_LT(1, 2);
	}

	TEST(산술연산자, 왼쪽이작거나같다)
	{
		EXPECT_LE(1, 1);
	}

	TEST(산술연산자, 오른쪽이작다)
	{
		EXPECT_GT(2, 1);
	}

	TEST(산술연산자, 오른쪽이작거나같다)
	{
		EXPECT_GE(2, 2);
	}
}