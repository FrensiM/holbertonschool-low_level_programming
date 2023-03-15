#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - main
 * @b: b
 * Return: return the value
 */
void *malloc_checked(unsigned int b)
{
	void *poi = malloc(b);

	if (poi == NULL)
		exit(98);
	return (poi);
}
