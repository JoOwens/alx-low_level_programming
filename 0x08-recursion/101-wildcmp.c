#include "main.h"

/**
 * strlen_no_wilds - calculates the length of a string,
 *                   ignoring wildcard characters.
 * @s: input string.
 *
 * Return: The length of s.
 */

int strlen_no_wilds(char *s)
{
	int len = 0;
	int i = 0;

	if (*(s + i))
	{
		if (*s != '*')
			len++;

		i++;
		len += strlen_no_wilds(s + i);
	}

	return (len);
}

/**
 * iterate_wild - Iterates through a string located at a wildcard
 *                until it points to a non-wildcard character.
 * @wildstr: The string to be iterated through.
 */

void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @s: The string to be matched.
 * @p: The postfix.
 *
 * Return: A pointer to the null byte If str and postfix are identical else
 * a pointer to the first unmatched character in postfix.
 */

char *postfix_match(char *s, char *p)
{
	int s_len = strlen_no_wilds(s) - 1;
	int p_len = strlen_no_wilds(p) - 1;

	if (*p == '*')
		iterate_wild(&p);

	if (*(s + s_len - p_len) == *p && *p != '\0')
	{
		p++;
		return (postfix_match(s, p));
	}

	return (p);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: 1 If the strings can be considered identical else 0.
 *
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
