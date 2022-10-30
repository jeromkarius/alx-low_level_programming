#include<stdio.h>
/**
  * main - possible combination
  *
  * Return: always (success)
  */
int main(void)
{
int a;
for (a = '0'; a <= '9'; a++)
{
putchar(a);
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
