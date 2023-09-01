#include "main.h"

/**
 * prime_num - calculate if num is prime
 * @num: input number
 * @d: divisor
 * Return: (0) if prime else -1
 */
int prime_num(int num, int d)
{
	if (num <= 1 || (num != d && num % d == 0))
		return (0);
	else if (num == d)
		return (1);
	return (prime_num(num, d + 1));
}

/**
 * is_prime_number - detects if number is prime or not
 * @n: input number to check
 * Return: 0 if prime 1 if not
 */

int is_prime_number(int n)
{
	return (prime_num(n, 2));
}
