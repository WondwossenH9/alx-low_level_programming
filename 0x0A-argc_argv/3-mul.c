#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts string to an int
 * @s: string to be converted
 * Return: converted int
 */
int _atoi(char *s)
{
	int a = 0;

	int b = 0;

	int c = 0;

	int len = 0;

	int e = 0;

	int digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && e == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			e = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			e = 0;
		}
		a++;
	}
	if (e == 0)
		return (0);
	return (c);
}
/**
 * main - multiplies two numbers		
 * @argc: number of arguments		
 * @argv: array of arguments		
 * Return: 0 (Success) otherwise 1
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = _atoi(argv[1]);

	num2 = _atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
