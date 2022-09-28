#include "main.h"

/**
 * is_prime_number - return 1 if n is a prime number
 * @n: number to work with
 * Return: 1 if n is prime
 */

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}

/**
 * is_prime - return 1 if prime
 * @n: number to work on
 * @start: number to start the check
 * Return: 1 if n is prime and 0 if not
 */

int is_prime(int n, int start)
{
	if (start <= 1)
		return (1);
	else if (n % start == 0)
		return (0);
	return (is_prime(n, start - 1));
}
