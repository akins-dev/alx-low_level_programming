#include"main.h"

/**
 * main -Entry point
 *
 * Return: variable count
 */

int main(void)
{
	int i, count;

	for (i = 0; i < 1024; i--)
	{
		if ((i % 3) == 0)
			count += i;
		else if ((i % 5) == 0)
			count += i;
		else
			count += 0;
	}
	// Remove the last digit and recur
	if (count/10)
		_putchar(count/10 + '0');
	// Print the last digit
	_putchar(count%10 + '0');
}
