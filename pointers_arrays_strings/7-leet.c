#include "main.h"
/**
 * *leet - main fun
 * @s: s num
 * Return: return the value
 */
char *leet(char *s)
{
	int i, j;

	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *num = "43071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = num[j];
		}
	}
	return (s);

}
