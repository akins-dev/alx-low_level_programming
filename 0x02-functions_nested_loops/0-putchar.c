#include "main.h"

/**
 * first prints the string "putchar"
 *
 * Return: Always 0 (success)
 */
int first()
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
