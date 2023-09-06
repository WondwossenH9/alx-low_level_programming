#include "main.h"
/**
 * _atoi - converts string to int
 * @s: string
 * Return: integer
 */
int _atoi(char *s)
{
	int n = 1, a = 0;
	unsigned int m = 0;

	while (!(s[a] <= '9' && s[a] >= '0') && s[a] != '\0')
	{
		if (s[a] == '-')
			n *= -1;
		a++;
	}
	while (s[a] <= '9' && (s[a] >= '0' && s[a] != '\0'))
	{
		m = (m * 10) + (s[a] - '0');
		a++;
	}
	m *= n;
	return (m);
}
