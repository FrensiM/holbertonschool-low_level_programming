#include "main.h"
#include <stddef.h>
/**
 * _strchr
 * @s: s
 * @c: c
 * Return: return the value
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		if (s[i] == c)
			return &s[i];
	return &s[i];
}