#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - outputs a struct dog
 * @x: struct dog to output
 */
void print_dog(struct dog *x)
{
	if (x == NULL)
		return;

	if (x->name == NULL)
		x->name = "(nil)";
	if (x->owner == NULL)
		x->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", x->name, x->age, x->owner);
}
