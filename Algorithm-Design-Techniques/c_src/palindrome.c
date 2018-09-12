int is_palindrome(char *str, int n)
{
	if (n == 0||n == 1) return 1;
	else return ((str[0] == str[n-1]) ? is_palindrome(str+1, n-2) : 0);
}
