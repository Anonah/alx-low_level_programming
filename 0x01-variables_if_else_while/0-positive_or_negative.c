#include<stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description: function that use printg
* Return: non-negative integer
*/
/* more headers goes there */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
/* negative and posetive identifier */
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
