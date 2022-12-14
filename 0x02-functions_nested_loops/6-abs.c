#include"main.h"

/**
 * _abs - takes in an integer
 *
 * @i: stores the input
 *
 * Return:  the absolute value of an integer
 */
int _abs(int i)
{
	int result;

	if (i < 0)
	{
		result = i + (i * -2);
	}
	else
	{
		result = i;
	}
	return (result);
}
