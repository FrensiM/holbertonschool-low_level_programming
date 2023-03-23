#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - main
 * @n: nr of elem
 * Return: return the arg
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum;

	if (n == 0)
		return (0);
	va_start(va, n);
	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(va, unsigned int);
	return (sum);
}
