#include <gtest/gtest.h>
#include <gmock/gmock.h>

extern int possible_combine(int n, int index);

TEST(AlgorithmTest, PossibleCombineTest)
{
	EXPECT_EQ(292, possible_combine(100, 0));
}