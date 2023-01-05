#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of s
 *
 * @s: the string
 *
 * Return: integer
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
	else
		return (0);
}
