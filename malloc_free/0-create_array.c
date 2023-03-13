#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *create_array - mai
 * @size: siz
 * @c: c
 * Return: return`
 */
char *create_array(unsigned int size, char c)
{
	char *poi;
	size_t i = 0;

	if (size == 0)
		return (NULL);
	poi = malloc(size);
	if (poi == NULL)
		return (NULL);
	while (i < size)
	{
		poi[i] = c;
		i++;
	}
	return (poi);
}
