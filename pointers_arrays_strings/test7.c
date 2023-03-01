#include "main.h"

void puts_half(char *str)
{
	int len;
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;

	if (len % 2 == 1)
		n = (len - 1) / 2;
	else 
		n = len / 2;
	while (n <= len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
