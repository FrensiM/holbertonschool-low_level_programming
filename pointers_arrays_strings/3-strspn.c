#include "main.h"
/**
 * _strspn - main fun
 * @s: s
 * @accept: ac
 * Return: return the alu
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, len = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			return (len);
		i++;
	}
	return (len);
}
