#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch = 'a';

	char ch2 = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		++ch;
	}
	while (ch2 <= 'Z')
	{
		putchar(ch2);
		++ch2;
	}
	putchar('\n');
	return (0);
}
