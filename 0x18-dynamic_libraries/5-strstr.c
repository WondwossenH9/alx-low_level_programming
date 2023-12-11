#include "main.h"
/**
 * _strstr - finds the first occurrence of the substring 
 * needle in the string haystack
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *i = haystack;
		char *m = needle;

		while (*i == *m && *m != '\0')
		{
			i++;
			m++;
		}
		if (*m == '\0')
			return (haystack);
	}
	return (0);
}
