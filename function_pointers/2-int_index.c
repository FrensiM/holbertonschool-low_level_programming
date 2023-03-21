#include "function_pointers.h"
/**
 * int_index - main fun
 * @array: arr
 * @size: size
 * @cmp : compare
 * Return: return the value
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]) == 1)
				return (i);
	}
	return (-1);
}
