#include <stdlib.h>
#include<stdio.h>
/**
*main- Entry point
*Return: 1
*Description: function to print statment without using printf and puts
*/
int main(void)
{
char given[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
fprintf(stderr, "%s", given);
return (1);
}
