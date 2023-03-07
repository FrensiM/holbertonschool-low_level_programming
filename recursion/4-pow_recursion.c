#include "main.h"
/**
 * _pow_recursion - main fun
 * @x: num1
 * @y: num2
 * Return: return the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	else
		return (x * _pow_recursion(x, y - 1))
}
