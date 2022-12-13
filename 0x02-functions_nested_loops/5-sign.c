#include"main.h"
/**
 * print_sign - prints '+' if n is positive,'0'if n is neutral and '-' otherwise
 *
 * @n: local variable to store input
 *
 * Return: 1 if positive, 0 if neutral and -1 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
