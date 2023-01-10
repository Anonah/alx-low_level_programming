#include<stdio.h>
/**
*main - entry point
*Description: print all single digit number from 10 based number
*Return: non-negative integer
*/
int main(void)
{
int num;
for (num = 0; num < 10; num++)
{
printf("%d", num);
}
printf("\n");
return (0);
}
