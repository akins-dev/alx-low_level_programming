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
	if ( s[0] == '\0')
		return;
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
