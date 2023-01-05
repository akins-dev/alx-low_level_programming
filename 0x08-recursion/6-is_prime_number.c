#include "main.h"
/**
 * check - a function that checks for prime numbers
 *
 * @x: the integer
 *
 * @i: the integer
 *
 * Return: integer
 */

int check(int x, int i)
{
	if (x % i == 0)
		return (0);
	else
	{
		if (i == 1)
			return (1);
	}
	return (check(x, i - 1));
}

/**
 * is_prime_number - a function that checks for prime numbers
 *
 * @n: the integer
 *
 * Return: integer
 */

int is_prime_number(int n)
{
	if (n <= 2)
	{
		if (n == 2)
			return (1);
		return (0);
	}
	return (check(n, n - 1));
}
