#include "search_algos.h"
#include <stddef.h>
#include <stdio.h>
/**
 * linear_search - func that search for a value
 * @array: is a pointer to first element
 * @size: nr of elements
 * @value: value to search for
 * Return: -1 or 1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
