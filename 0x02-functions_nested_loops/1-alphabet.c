#include"main.c"

/**
 * print_alphabet - prints a-z
 *
 * Return: void
 */

void print_alphabet(void)
{
	char n = 'a';

	while (n <= 'z')
	{
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
