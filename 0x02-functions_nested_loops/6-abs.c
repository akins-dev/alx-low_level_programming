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
		return (i + (i * -2));
	}
	if (i > 0)
	{
		return (i);
	}
	if (i == 0)
	{
		return (0);
	}
}
