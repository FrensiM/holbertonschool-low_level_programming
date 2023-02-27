#include "main.h"
#include <stdio.h>
/**
 * print_rev - main func
 * @s: num
 */
void print_rev(char *s)
{
	int i;
	int len;

	for (i = 0; s[i] != '\0' ; i++)
	{
		len = i;
	}
	for (i = len; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
