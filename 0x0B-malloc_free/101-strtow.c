#include <stdlib.h>
#include "main.h"
/**
 * count_word - counts the number of words
 * @s: string to evaluate
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, a, b;

	flag = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			b++;
		}
	}
	return (b);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 * Return: pointer to an array of strings else NULL
 */
char **strtow(char *str)
{
	char **ord, *tmp;

	int g, h = 0, s = 0, words, x = 0, start, end;

	while (*(str + s))
		s++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	ord = (char **) malloc(sizeof(char *) * (words + 1));
	if (ord == NULL)
		return (NULL);
	for (g = 0; g <= s; g++)
	{
		if (str[g] == ' ' || str[g] == '\0')
		{
			if (x)
			{
				end = g;
				tmp = (char *) malloc(sizeof(char) * (x + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				ord[h] = tmp - x;
				h++;
				x = 0;
			}
		}
		else if (x++ == 0)
			start = g;
	}
	ord[h] = NULL;
	return (ord);
}
