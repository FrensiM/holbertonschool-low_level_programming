#include "main.h"
/**
 * swap_int - main funk
 * @a: num1
 * @b: num2
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
