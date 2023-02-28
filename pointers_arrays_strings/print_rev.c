#include "main.h"

void print_rev(char *s)
{
	int i = 0, len;

	while (s[i] != '\0')
		i++;
	len = i;

	for (i = len; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
