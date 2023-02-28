#include "main.h"
#include <stdio.h>
/**
 * _strcpy - main funks
 * @dest: dest
 * @src: src
 * Return: return the value
 */
char *_strcpy(char *dest, char *src)
{
	char *dest_new = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_new);

}
