#include "main.h"
#include <stdio.h>
/**
 * reverse_array - main funk
 * @a: array
 * @n: array num
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
