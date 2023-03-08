#include <stdio.h>
#include <stdlib.h>
/**
 * main - main fu
 * @argc: arg
 * @argv: argv
 * Return - return th v
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
