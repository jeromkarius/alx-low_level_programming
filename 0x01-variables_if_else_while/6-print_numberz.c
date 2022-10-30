#include<stdio.h>
/**
  * main - prints digit
  *
  * Return: always (success)
  */

int main(void)
{
int a = '0';
while (a <= '9')
{
putchar(a);
a++;
putchar('\n');
}
return (0);
}
