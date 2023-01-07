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
	/* To stop unused argument warning */
	argv = argv;

	printf("%d\n", argc - 1);
	return (0);
}
