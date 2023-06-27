#include "main.h"
/**
 * swap_int - swaps the value of 2 int
 * @a: swap integer
 * @b: swap integer
 */

void swap_int(int *a, int *b)
{
	int r;

	r = *a;
	*a = *b;
	*b = r;
}
