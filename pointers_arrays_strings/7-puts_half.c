#include "main.h"
/**
 * puts_half - main fun
 * @str: str
 *
 */
void puts_half(char *str)
{
	int i;
	int n;

	for (i = 0; str[i] != '\0'; i++)

	if (i % 2 == 1)
	{
		n = (i - 1) / 2;
		n += 1;
	}
	else
	{
		n = i / 2;
	}
	for (; n < i; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
