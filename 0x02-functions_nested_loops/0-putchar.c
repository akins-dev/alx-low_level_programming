#include "main.h"

/**
 * first prints the string "putchar"
 *
 * Return: Always 0 (success)
 */
int first()
{
	char name[] = "_putchar";

	for (int i = 0; i < 8; i++)
	{
		_putchar(name[i]);
	}
	_putchar('\n');

	return (0)
}
