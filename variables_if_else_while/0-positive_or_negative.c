#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
printf("The number is positive \n");
}
else if (n == 0)
{
printf("The number is zero \n");
}
else
{
printf("The number is negative \n");
}
return (0);
}
