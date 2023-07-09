#include <stdio.h>
#include "main.h"

/**
 * main - outputs received arguments
 * @argc: argument numbers
 * @argv: argument arrays
 * Return: return 0 always 0 (passed)
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}

	return (0);
}
