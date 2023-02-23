#include "main.h"

void test_98(int n)
{
	int i;

	if ( n < 98)
	{
		for(i=n; i <= 98; i++)
			_putchar(',');
			_putchar(' ');
			_putchar(i);
	}
	if (n > 98)
	{
		for(i=n; i>= 98; i--)
			_putchar(',');
			_putchar(' ');
			_putchar(i);
	}
}
