#include "main.h"
/**
 * is_prime_number - returns if a number is prime
 * @n: number input
 * Return: (1) if prime otherwise (0)
 * check_prime - checks if number is prime
 * @n: number input to check
 * @i: iteration counter
 * Return: 1 if prime 0 if not
 */
int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else
	{
		return (check_prime(n, i + 1));
	}
}
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
