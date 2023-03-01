#include "main.h"
/**
 * puts_half - main fun
 * @str: str
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	n=i;

	for (i = 0; i < n; i++)
	{
		if (i > n / 2 && i % 2 == 0)
			_putchar(str[i]);
		else if (i >= n / 2 && i % 2 == 1)
			_putchar(str[i]);
	}
	_putchar('\n');
}
