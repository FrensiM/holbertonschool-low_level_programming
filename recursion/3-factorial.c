#include "main.h"
/**
 * factorial - factorial of a num
 * @n: num
 * Return: return the fac
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
