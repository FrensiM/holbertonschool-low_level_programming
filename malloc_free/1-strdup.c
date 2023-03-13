#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *_strdup - ma
 * @str: str
 * Return: return
 */
char *_strdup(char *str)
{
	int i, len;
	char *ptr;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len = i;
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	return (ptr);
}
