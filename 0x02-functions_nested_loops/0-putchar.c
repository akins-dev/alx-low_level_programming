#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char name[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(name[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
