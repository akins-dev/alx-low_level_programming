#include"main.h"

/**
 * print_last_digit - takes an integer
 *
 * @i: stores the input
 *
 * Return: the last digit of the input
 */

int print_last_digit(int i)
{
	int result;

	if (i < 0)
		result = -1 * (i % 10);
	else
		result = i % 10
	
	_putchar(result + '0');
	return (result);
}
