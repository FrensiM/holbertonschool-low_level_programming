#include "main.h"
/**
 * print_last_digit - check the code
 * @n: put your number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		return (n % 10);
	}
	else if (n < 0)
	{
		return (n % 10 * -1);
	}
	else
	{
		return (0);
	}
}
