#include "main.h"
/**
 * fun_prime - fun
 * @i: sa
 * @n: num
 * Return: the value
 */
int fun_prime(int i, int n)
{
	if (n < 0)
		return (0);
	if (i * i == n)
		return (0);
	else if (i * i > n)
		return (1);
	return (fun_prime(i + 1, n));
}
/**
 * is_prime_number - fun
 * @n: num
 * Return: return the vakue
 */
int is_prime_number(int n)
{
	int i = 0;

	return (fun_prime(i, n));
}
