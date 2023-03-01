#include "main.h"
#include <stdio.h>

int _atoi(char *s)
{
	int n = 0;
	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		printf("%d para mbledhjes\n", n);
		n = n * 10 + s[i] - '0';
		printf("%d pas mbledhjes\n", n);
	}
	return (n);
}
