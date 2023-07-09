#include <stdio.h>
#include "main.h"

/**
 * main - outputs number of argument given to program
 * @argc: argument number
 * @argv: array number
 * Return: return 0 always (passed)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*forget argv*/
	printf("%d\n", argc - 1);

	return (0);
}
