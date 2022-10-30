#include<stdio.h>
/**
  * main - prints the alphabetic
  *
  * Return: always (success)
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
