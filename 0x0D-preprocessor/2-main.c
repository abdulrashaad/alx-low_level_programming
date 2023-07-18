#include <stdio.h>

/**
 * main - outputs file name
 * Return: Always 0 (passed)
 */
int main(void)
{
	int r;

	r = 2;

	if (r < 2)
	printf("%s\n", __FILE__);
	return (0);
}
