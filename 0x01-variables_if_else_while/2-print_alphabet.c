#include<stdio.h>
/**
  * main - Entry point
  * Description: print alphbet
  * return always 0 (success)
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
return (0);
}
