#include <string>

using std::string;

int cxx_is_palindrome(string &word)
{
	auto len = word.size();
	if (len == 0||len == 1) return 1;
	else {
		if (word[0] == word[len-1]) {
			word = word.substr(1, len - 2);
			return cxx_is_palindrome(word);
		}	else return 0;
	}
}
