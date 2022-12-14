#include"main.h"

/**
 * main -Entry point
 *
 * Return: variable count
 */

int main(void)
{
	int i, count;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			count += i;
	}
	printf("%d\n", count);

	return (0);
}
