#include "main.h"
/**
 * print_last_digit - check the code
 * @n: put your number
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
