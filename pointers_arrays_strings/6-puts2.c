#include "main.h"

void puts2(char *str)
{
	int i, len;

	for (i=0; str[i] != '\0'; i++)
	{
		len = i;
	}
	for (i = len; str[i] != '\0'; i=i+2)
		_putchar(str[i]);
}
