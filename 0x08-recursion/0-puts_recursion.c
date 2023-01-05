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
	_putchar(s[0]);
	if ( s[1] == '\0' )
	}		
		_putchar('\n');
	}
	else 
	{
		if ( s[1] )
			_puts_recursion(s + 1);
	}
}
