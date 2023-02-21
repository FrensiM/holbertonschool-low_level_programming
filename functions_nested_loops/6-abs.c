#include "main.h"
/**
* _abs - main function
* @n: Parameter for letters
* Return: Always 0 (success)
*/
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}

