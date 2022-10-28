#include<stdio.h>
#include"main.h"
/**
  * print_to_98 - print numbers
  * @n : number int
  * Desciption : write different numbers
  * Return n
  */

void print_to_98(int n)
{
if (n <= 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n >= 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
