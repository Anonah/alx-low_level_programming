#include<stdio.h>
/**
*main - entry point
*Description: prints all possible combinations of single-digit numbers
*Return: non-negative integer
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num + '0');
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
