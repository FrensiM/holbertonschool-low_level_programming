#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - mian
 * @s1: s1
 * @s2: s2
 * @n: n
 * Return: return the value
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, index, so1, so2;
	char *poi;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	so1 = i;
	i = 0;
	while (s2[i] != '\0')
		i++;
	so2 = i;

	poi = malloc(n + sizeof(char) * so1 + 1);
	if (poi == NULL)
		return (NULL);
	if (n >= so2)
		n = so2;
	for (i = 0; i < so1; i++)
	{
		poi[i] = s1[i];
	}
	index = i;
	for (i = 0; i < n; i++)
	{
		poi[index + i] = s2[i];
	}
	poi[index + i] = '\0';
	return (poi);
}
