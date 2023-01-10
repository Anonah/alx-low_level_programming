#include<stdio.h>
/**
*main - entry point
*Description: function that print alphabet letter in small and capital letter
*Return: non-negative integer
*/
int main(void)
{
char str;
for (str = 'a'; str <= 'z'; str++)
{
putchar(str);
}
for (str = 'A'; str <= 'Z'; str++)
{
putchar(str);
}
putchar('\n');
return (0);
}
