#include<stdio.h>
/**
  * main - prints some letters of alphabet
  *
  * Return: Always success
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
}
putchar('\n');
return (0);
}
