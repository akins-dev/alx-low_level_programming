#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		/* convert num to ASCII representation */
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}
