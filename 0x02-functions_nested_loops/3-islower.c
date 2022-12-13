#include"main.h"

/**
 * _islower - function that checks if a letter is in upper or lowecase
 *
 * @c: local variable to store input
 *
 * Return: 1 if letter is in lowercase and 0 otherwise
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
