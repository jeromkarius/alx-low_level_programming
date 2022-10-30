#include<stdio.h>
/**
  * main - prints hexdecimal
  *
  * Return: always (success)
  */

int main(void)
{
int a;
for (a = '0'; a < '9'; a++)
{
putchar(a);
}
for (a = 'a'; a < 'g'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
