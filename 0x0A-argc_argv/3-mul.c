#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: Argument vector (array of pointers to char)
 *
 * Return: Always 0 if successful, 1 if not
  */

int main(int argc, char *argv[])
{
	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	/* atoi convert a string to an int */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));	
	return (0);
}
