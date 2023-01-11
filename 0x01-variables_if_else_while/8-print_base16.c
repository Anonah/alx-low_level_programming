#include<stdio.h>
/**
*main - entry point
*Description: print number base to 16 in lowercase
*Return: non-negative integer
*/
int main(void)
{
int num;
char str = 'a';
for (num = 0; num <= 15; num++)
{
if (num < 10)
{
putchar(num + '0');
}
else
{
while (str <= 'f')
{
putchar(str);
str++;
}
}
}
putchar('\n');
return (0);
}
