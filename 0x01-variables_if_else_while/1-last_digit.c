#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * A program that assign random number to n
 * Main - Entry point
 * Return: Always retun 0  Passed
 */

int main(void)

{
	int n;

	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;

	printf("last digit of %d is %d and is ", n, x);
	if (x > 5)
		printf("greater than 5\n");
	else if (x == 0)
		printf("0\n");
	else
		printf("less than 6 and not 0\n");
	return (0);
}
