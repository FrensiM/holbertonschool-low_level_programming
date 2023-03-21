#include "function_pointers.h"
/**
 * array_iterator - main fun
 * @array: array
 * @size: size of aray
 * @action: funk
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
