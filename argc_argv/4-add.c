#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * main - main fun
 * @argc: argc
 * @argv: arg
 * Return: retrn
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			if (_num(argv[i]) == 1)
				sum = sum + atoi(argv[i]);
			else
			{
				printf("Error\n");
				exit(-1);
			}
		}
		else
		{
			printf("Error\n");
			exit(-1);
		}
	}
	printf("%d\n", sum);
		return (0);
}
/**
 * _num - ma
 * @s: char
 * Return: return main value
 */
int _num(char *s)
{
	int i, size;

	size = strlen(s);

	for (i = 0; i < size; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			continue;
		else
			return (-1);
	}
	return (1);
}
