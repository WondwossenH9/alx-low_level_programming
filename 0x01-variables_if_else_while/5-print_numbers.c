#include <stdio.h>

/**
 * main - entry point
 * num: counter variable
 * Return: 0 on success
 */

int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}
