#include "main.h"
#include <stddef.h>
/**
 * _strchr - main fun
 * @s: s
 * @c: c
 * Return: return the value
 */
char *_strchr(char *s, char c)
{
	int i, size = 0;

	while (s[size] != '\0')
		size++;
	if (s[size] == c)
		return (&s[size]);

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return (&s[i]);
	return (NULL);
}
