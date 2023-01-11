#include<stdio.h>
/**
*main - entry point
*Description: prints all possible combinations of single-digit numbers
*Return: non-negative integer
*/
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar(num + '0');
num++;
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
