#include<stdio.h>
/**
*main - entry point
*Description : print alphabets in reverse
*Return: non-negative integer
*/
int main(void)
{
char alp;
for (alp = 'z'; alp >= 'a'; alp--)
{
putchar(alp);
}
putchar('\n');
return (0);
}
