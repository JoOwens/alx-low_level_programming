#include "main.h"

/**
 * get_strlen - Finds the length of a string.
 * @s: Input string.
 *
 * Return: The length of the string.
 */

int get_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome or not.
 * @s: The string to be checked.
 * @len: The length of s.
 * @i: The index of the string to be checked.
 *
 * Return: 1 If the string is a palindrome else 0.
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 If the string is a palindrome else 0.
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
