#include <stdio.h>
/**
 * main - main fun
 * @argc: argc
 * @argv: argv
 * Return: return the
 */
int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
		printf("%s\n", argv[count]);
	return (0);
}
