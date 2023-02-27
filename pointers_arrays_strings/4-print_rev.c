#include "main.h"
#include <stdio.h>
/**
 * print_rev - main func
 * @s: num
 */
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
		i = i;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
