#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <string>

#ifdef __cplusplus
extern "C" {
#endif
extern int is_palindrome(char *str, int n);
#ifdef __cplusplus
}
#endif

using std::string;
extern int cxx_is_palindrome(string &word);

TEST(AlgorithmTest, PalindromeTest)
{
	EXPECT_TRUE(is_palindrome("", 0));
	EXPECT_FALSE(is_palindrome("abc", 3));
	EXPECT_TRUE(is_palindrome("eve", 3));
	EXPECT_TRUE(is_palindrome("adda", 4));
}

TEST(AlgorithmTest, CxxPalindromeTest)
{
	string test; 
	EXPECT_TRUE(cxx_is_palindrome(test));
	EXPECT_FALSE(cxx_is_palindrome((test = "abc")));
	EXPECT_TRUE(cxx_is_palindrome((test = "eve")));
	EXPECT_TRUE(cxx_is_palindrome((test = "abba")));
}

