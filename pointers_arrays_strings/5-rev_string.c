#include "main.h"
#include <stdio.h>
/**
 * rev_string - main fun
 * @s: s
 *
 */
void rev_string(char *s)
{
	int i, tmp, len;

	for (i = 0; s[i] != '\0'; i++)
	{
		len = i;
	}
	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
	}
}
