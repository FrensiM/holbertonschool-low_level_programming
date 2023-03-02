#include "main.h"
/**
 * _memset - funk
 * @s: s
 * @b: b
 * @n: num
 * Return: return the value
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
