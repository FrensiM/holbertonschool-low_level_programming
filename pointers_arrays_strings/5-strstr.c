#include "main.h"
#include <stddef.h>
/**
 * _strstr - main fun
 * @haystack: ha
 * @needle: ned
 * Return: return the value
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	if (needle[i] == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[0] && haystack[i + 1] == needle[1])
			{
				return (&haystack[i]);
			}
		}
	}
	return (0);
}
