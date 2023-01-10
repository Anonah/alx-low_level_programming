#include<stdio.h>
/**
*main - entry point
*Description: print single digit numbers from 10 based numbers using putchar
*Return: non-negative integer
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
putchar(num);
}
putchar('\n');
return (0);
}
