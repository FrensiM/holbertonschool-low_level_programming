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
	unsigned int i;

	for(i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
