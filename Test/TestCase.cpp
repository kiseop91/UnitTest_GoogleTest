#include <limits.h>
#include "../Target/sample.h"
#include "gtest/gtest.h"

namespace {

	TEST(�����Լ��׽�Ʈ, int���ֱ�) {
		
		EXPECT_EQ(3, Add(1, 2));
	}

	TEST(�����Լ��׽�Ʈ, float���ֱ�) {

		EXPECT_EQ(4.0f, Add(1.5f, 2.5f));
	}

	TEST(�����Լ��׽�Ʈ, double���ֱ�) {

		EXPECT_EQ(4.0, Add(1.5, 2.5));
	}

	TEST(���ڿ��׽�Ʈ, �ι��ڿ�������)
	{
		EXPECT_STREQ("��⼷", "��⼷");
	}

	TEST(���ڿ��׽�Ʈ, �ι��ڿ����ٸ���)
	{
		EXPECT_STRNE("��⼷", "ŷ����");
	}

	TEST(���������, �ٸ���)
	{
		EXPECT_NE(1, 2);
	}

	TEST(���������, �������۴�)
	{
		EXPECT_LT(1, 2);
	}

	TEST(���������, �������۰ų�����)
	{
		EXPECT_LE(1, 1);
	}

	TEST(���������, ���������۴�)
	{
		EXPECT_GT(2, 1);
	}

	TEST(���������, ���������۰ų�����)
	{
		EXPECT_GE(2, 2);
	}
}