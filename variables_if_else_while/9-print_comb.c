#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
putchar(i);
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}
