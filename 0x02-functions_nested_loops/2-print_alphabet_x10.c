#include "main.h"

/**
 * print_alphabet_x10 - function that prints a to z 10 times
 *
 */

void print_alphabet_x10(void)
{
	char n = 'a';
	int count = 0;

	while (count < 10)
	{
		while (n <= 'z')
		{
			_putchar(n);
			n++;
		}
		n = 'a';
		_putchar('\n');
		count++;
	}
}
