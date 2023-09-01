#include "main.h"
/**
 * _strlen_recursion - gets the length of string
 * @s: string
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * compare_string - compares char of string
 * @s: string
 * @pre: preceeding char iterator
 * @suc: successor char iterator
 * Return: int
 */
int compare_string(char *s, int pre, int suc)
{
	if (*(s + pre) == *(s + suc))
	{
		if (pre == suc || pre == suc + 1)
			return (1);
		return (0 + compare_string(s, pre + 1, suc - 1));
	}
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: string to check
 * Return: 1 if  string is palindrome else 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
