#include<stdio.h>
/**
*main - entry point
*Description: prints all possible combinations of single-digit numbers
*Return: non-negative integer
*/
int main(void)
{
int num = 0;
do {
putchar(num + '0');
putchar(',');
putchar(' ');
num++;
} while (num < 10);
putchar('\n');
return (0);
}
