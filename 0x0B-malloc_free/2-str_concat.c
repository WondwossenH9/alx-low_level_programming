#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input to be concatenated
 * @s2: input to be concatenated
 * Return: concatination of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int ai, ba;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	a = ba = 0;
	while (s1[a] != '\0')
		a++;
	while (s2[ba] != '\0')
		ba++;
	concat = malloc(sizeof(char) * (a + ba + 1));
	if (concat == NULL)
		return (NULL);
	a = ba = 0;
	while (s1[a] != '\0')
	{
		concat[a] = s1[a];
		a++;
	}
	while (s2[ba] != '\0')
	{
		concat[a] = s2[ba];
		a++, ba++;
	}
	concat[a] = '\0';
	return (concat);
}
