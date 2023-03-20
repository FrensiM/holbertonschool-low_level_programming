#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - free the fun
 * @d: d
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		exit(0);
	free(d->name);
	free(d->owner);
	free(d);
}
