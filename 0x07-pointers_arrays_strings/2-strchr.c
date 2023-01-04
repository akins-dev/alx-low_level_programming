#include "main.h"

/**
 * _strchr:  locates a character in a string.
 *
 * @s: A pointer to a string.
 * @c: Character to be located.
 *
 * Return: A pointer to the first occurence of 
 * 	a character, NULL if not found.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}
