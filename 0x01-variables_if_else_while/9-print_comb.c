#include<stdio.h>
/**
*main - entry point
*Description: prints all possible combinations of single-digit numbers
*Return: non-negative integer
*/
int main(void)
{
int num;
char x[3] = ", ";
for (num = 0; num <= 9; num++)
{
if (num == 9)
{
putchar(num + '0');
}
else
{
putchar(num + '0');
putchar(x);
}
}
putchar('\n');
return (0);
}
