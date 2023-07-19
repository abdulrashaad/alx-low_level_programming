#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - initialization of variable for type struct dog
 * @x: initialiation of pointer to struct dog
 * @name: initialization for name
 * @age: initialization for age
 * @owner: initializion for owner
 */

void init_dog(struct dog *x, char *name, float age, char *owner)
{
	if (x == NULL)
		x = malloc(sizeof(struct dog));
	x->name = name;
	x->age = age;
	x->owner = owner;
}
