#include "main.h"
/**
 * _strlen_recursion - returns length of string
 * @s: string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compates characters of a string
 * @s: string
 * @n: smallest iterator
 * @i: biggest iterator
 * Return: .
 */
int comparator(char *s, int n, int i)
{
	if (*(s + n) == *(s + i))
	{
		if (n == i || n == i + 1)
			return (1);
		return (0 + comparator(s, n + 1, i - 1));
	}
	return (0);
}

/**
 * is_palindrome - returns a string palindrome
 * @s: string
 * Return: 1 if palndrome, 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
