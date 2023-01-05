#include "main.h"

/**
 * factorial - a function that returns the factorial of n
 *
 * @n: the integer
 *
 * Return: integer
 */

int factorial(int n)
{
	if ( n == 0 )
		return (1);
	if ( n < 0 )
		return (-1);
	return (n + factorial(n - 1) - 1);
}
