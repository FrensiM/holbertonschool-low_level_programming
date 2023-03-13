#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat- main fun
 * @s1: s1
 * @s2: s2
 * Return: return
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *ret;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		len1 = i + 1;
	for (j = 0; s2[j] != '\0'; j++)
		len2 = j + 1;

	ret = malloc((len1 + len2 + 1) * sizeof(char));
	if (ret == NULL)
		return (NULL);
	i = 0;
	while (i < len1)
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		ret[i] = s2[j];
		j++;
		i++;
	}
	return (ret);
}
