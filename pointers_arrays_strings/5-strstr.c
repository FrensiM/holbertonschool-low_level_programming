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
	int i, j, boolean;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		boolean = 1;
		if (haystack[i] == needle[0])
		{
			for (j = i; needle[j] != '\0'; i++)
			{
				if (haystack[i + j] != needle[j])
					break;
			}
		}
		else
			boolean = 0;
		if (boolean)
			return (&haystack[i]);
	}
	return (NULL);
}
