#include "main.h"
/**
 * *cap_string - main fun
 * @str: strin
 * Return: return the value
 */
char *cap_string(char *str)
{
	int i, j;
	char *sep = ",;.!?\"(){} \n\t";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}
	for (i = 0 ; str[i] != '\0'; i++)
	{
		for (j = 0; sep[j] != '\0'; j++)
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z' && str[i] == sep[j])
			{
				str[i + 1] = str[i + 1] - 32;
			}
	}
	return (str);
}


