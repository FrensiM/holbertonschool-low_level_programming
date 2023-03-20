#include <stdio.h>
#include "dog.h"
/**
 * print_dog - print the struct
 * @d: d
 *
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL && d->owner == NULL)
		{
			printf("Name: (nil)");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
