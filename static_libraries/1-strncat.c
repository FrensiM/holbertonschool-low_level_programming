#include "main.h"
/**
 * _strncat - main fun
 * @dest: dest
 * @src: src
 * @n: numb
 * Return: return teh value
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0' && i < n)
	{
		*ptr++ = *src++;
		i++;
	}
	*ptr = '\0';
	return (dest);
}
