#include <stdio.h>
int main (void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("Buzz\n");
			return (0);
		}
		if ((i % 5)== 0 && (i % 3) == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz ");
			continue;
		}
		else if ((i % 3) ==0)
		{
			printf("Fizz ");
			continue;
		}
		else
		{
			printf("%d", i);
		}
	printf(" ");
	}
	printf("\n");
	return (0);
}
