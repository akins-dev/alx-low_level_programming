#include "main.h"

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: Argument vector (array of pointers to char)
 *
 * Return: Always 0 (success)
  */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
