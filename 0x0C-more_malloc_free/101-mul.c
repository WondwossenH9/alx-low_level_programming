#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define ERR_MSG "error"
/**
 * is_digit - checks non-digit char
 * @s: string
 * Return: 0 for non-digit char, else 1
 */
int is_digit(char *s)
{
	int n = 0;

	while (s[n])
	{
		if (s[n] < '0' || s[n] > '9')
			return (0);
		n++;
	}
	return (1);
}
/**
 * _strlen - returns string length
 * @s: string
 * Return: string length
 */
int _strlen(char *s)
{
	int m = 0;

	while (s[m] != '\0')
	{
		m++;
	}
	return (m);
}
/**
 * errors - checks errors
 */
void errors(void)
{
	printf("error\n");
	exit(98);
}
/**
 * main - multiplies two integers
 * @argc: arguments
 * @argv: array of arguments
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *str1, *str2;
	int length1, length2, length, h, con, num1, num2, *result, b = 0;

	str1 = argv[1], str2 = argv[2];
	if (argc != 3 || !is_digit(str1) || !is_digit(str2))
		errors();
	length1 = _strlen(str1);
	length2 = _strlen(str2);
	length = length1 + length2 + 1;
	result = malloc(sizeof(int) * length);
	if (!result)
		return (1);
	for (h = 0; h <= length1 + length2; h++)
		result[h] = 0;
	for (length1 = length1 - 1; length1 >= 0; length1--)
	{
		num1 = str1[length1] - '0';
		con = 0;
		for (length2 = _strlen(str2) - 1; length2 >= 0; length2--)
		{
			num2 = str2[length2] - '0';
			con += result[length1 + length2 + 1] + (num1 * num2);
			result[length1 + length2 + 1] = con % 10;
			con /= 10;
		}
		if (con > 0)
			result[length1 + length2 + 1] += con;
	}
	for (h = 0; h < length - 1; h++)
	{
		if (result[h])
			b = 1;
		if (b)
			_putchar(result[h] + '0');
	}
	if (!b)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
