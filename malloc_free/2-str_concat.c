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

	len1 = 0;
	for (i = 0; s1[i] != '\0'; i++)
		len1 = i + 1;
	len2 = 0;
	for (j = 0; s2[j] != '\0'; j++)
		len2 = i + 1;

	ret = malloc((len1 + len2 + 1) * sizeof(char));

	if (ret == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		ret[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		ret[i] = s2[j];
		j++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
