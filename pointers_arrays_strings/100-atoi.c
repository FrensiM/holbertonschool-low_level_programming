#include "main.h"
#include <stdio.h>
/**
 * _atoi - main funk
 * @s: num
 * Return: return the value
 */
int _atoi(char *s)
{
	int len, i, sign, flag, j;
	unsigned int num;

	len = num = flag = j = 0;
	sign = 1;

	while (s[len] != '\0')
		len++;

	if (len == 0)
		return (0);

	for (i = 0; i < len; i++)
	{
		if (s[i] == '-')
		{
			sign = sign * -1;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			while (s[i] >= '0' && s[i] <= '9')
			{
				num = num * 10 + (s[i] - '0');
				i++;
			}
			return (sign * num);
		}
	}
	return (0);
}
