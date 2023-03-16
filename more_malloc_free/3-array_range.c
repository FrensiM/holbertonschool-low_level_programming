#include "main.h"
#include <stdlib.h>
/**
 * array_range - range of array
 * @min: min num
 * @max: max num
 * Return: return the value
 */
int *array_range(int min, int max)
{
	int *poi;
	int i;
	int len = max - min + 1;

	if (min > max)
		return (NULL);
	poi = malloc(len * sizeof(int));
	if (poi == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		poi[i] = min;
		min++;
	}
	return (poi);
}
