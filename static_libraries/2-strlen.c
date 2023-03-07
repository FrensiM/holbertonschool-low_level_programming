#include "main.h"
/**
 * _strlen - main func
 * @s: s char
 * Return: returns the length
 */
int _strlen(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
