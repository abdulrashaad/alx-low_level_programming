#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory selected for struct dog
 * @x: struct dog to be freed
 */

void free_dog(dog_t *x)
{
	if (x)
	{
		free(x->name);
		free(x->owner);
		free(x);
	}
}
