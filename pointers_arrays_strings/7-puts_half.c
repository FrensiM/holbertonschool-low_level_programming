#include "main.h"
/**
 * puts_half - main fun
 * @str: str
 *
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	for (i = 0; str[i] != '\0'; i++)
	{
		len = i;
	}

	if (len % 2 == 0)
	{
		n = (len / 2);
	}
	else
	{
		n = (len - 1) / 2;
	}
	for (i = n + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
