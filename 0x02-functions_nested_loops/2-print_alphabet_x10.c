#include "main.h"

/**
 * main - Entry point
 *
 * print_alphabet_x10:  prints a-z ten times
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
	return;
}
