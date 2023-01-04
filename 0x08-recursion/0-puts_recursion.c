#include "main.h"

/**
 * _puts_recursion: prints string *s using recursion
 *
 * @*s: string to be printed
 *
 * Return - void
 */  

void _puts_recursion(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		_putchar(s[i]);
	i++;
}
