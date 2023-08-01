#include <stdio.h>
/**
 * main - prints fibonacci numbers first 50 of them
 * the numbers are separated by comma and space
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	long fib1 = 1, fib2 = 2;

	while (num < 54)
	{
		if (num == 0)
			printf("%ld", fib1);
		else if (num == 1)
			printf(", %ld", fib2);
		else
		{
			fib2 += fib1;
			fib1 = fib2 - fib1;
			printf(", %ld", fib2);
		}
		++num;
	}
	printf("\n");
	return (0);
}
