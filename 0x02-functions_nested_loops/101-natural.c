#include <stdio.h>
/**
 * main - lists natural numbers up to 1024
 * that are a multiples of 3 or 5
 * Return: Always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum +=i;
	}
	printf("%d\n", sum);
	return (0);
}
