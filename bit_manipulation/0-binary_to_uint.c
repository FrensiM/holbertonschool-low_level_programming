#include <stdio.h>
#include "main.h"
/**
 * binary_to_uint - func that converts a binary nr to an unsigned int
 * @b: binary nr
 * Return: return the value
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0;
	unsigned int w = 1, s = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
			s = s + w;
		w = w * 2;
	}
	return (s);
}
