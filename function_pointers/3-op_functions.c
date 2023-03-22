#include "3-calc.h"
#include <stdio.h>
/**
 * op_add - main fun
 * @a: num
 * @b: num
 * Return: return the add
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - main fun
 * @a: num1
 * @b: num2
 * Return: return the sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - mian funk
 * @a: num1
 * @b: num2
 * Return: return the value
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - main fun
 * @a: num1
 * @b: num2
 * Return: return teh value
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - main fun
 * @a: num1
 * @b: num2
 * Return: return the value
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
