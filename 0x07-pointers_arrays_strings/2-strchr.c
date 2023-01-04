#include "main.h"

/**
 * _strchr:  locates a character in a string
 * 	and returns a pointer to the first ooccurence
 * 	of the character. It reurns NULL if not found.
 *
 * @s: A pointer to a string
 * @c: Character to be located
 *
 * Return: A pointer to the first occurence of 
 * 	a character, NULL if not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		       return (s + i);
	}

	return ('\0');
}
