#include <gtest/gtest.h>
#include <gmock/gmock.h>

#ifdef __cplusplus
extern "C" {
#endif
extern int is_palindrome(char *str, int n);
#ifdef __cplusplus
}
#endif

using namespace testing;

TEST(AlgorithmTest, PalindromeTest)
{
	EXPECT_TRUE(is_palindrome("", 0));
	EXPECT_FALSE(is_palindrome("abc", 3));
	EXPECT_TRUE(is_palindrome("eve", 3));
	EXPECT_TRUE(is_palindrome("adda", 4));
}
