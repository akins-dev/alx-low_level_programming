#include"main.h"

/**
 * _isalpha - takes in an integer
 *
 * @c: stores the input
 *
 * Return: 1 if isalpha, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
