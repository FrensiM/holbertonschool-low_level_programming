#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main fun
 * @argv: arguments
 * @argc: nr of arg
 * Return: return the main value
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
