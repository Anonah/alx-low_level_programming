#include<stdio.h>
/**
*main - entry point
*Description: function that print alphabet except q and e
*Return: non-negative integer
*/
int main(void)
{
char str = 'a';
while (str <= 'z')
{
if (str != 'e' && str != 'q')
{
putchar(str);
}
str++;
}
putchar('\n');
return (0);
}
