#include<stdio.h>
/**
  * main - Entry point
  * Description: print alphbet
  * return always 0 (success)
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'm'; ch++)
{
putchar(ch);
}
for (ch = 'n'; ch <= 'z'; ch++)
{
putchar(ch);
}
return (0);
}
