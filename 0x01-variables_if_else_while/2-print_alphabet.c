#include<stdio.h>
/**
* main - entry point
* Description : print alphabet in lower case in ascending order
* Return: non-negative integer
*/
int main(void)
{
char alp;
for (alp = 'a' ; alp <= 'z' ; alp++)
{
putchar(alp);
}
putchar('\n');
return (0);
}
