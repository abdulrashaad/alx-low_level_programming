#include <stdio.h>
#include "main.h"

/**
 * main - output name of program
 * @argc: figure of arguments
 *  @argv: argument arrays
 *  Return: return always 0 (passed)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
