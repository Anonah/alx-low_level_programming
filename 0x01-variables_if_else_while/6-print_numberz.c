#include<stdio.h>
#include<stdlib.h>
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
putchar(num + '0');
}
putchar('\n');
return (0);
}
