#include<stdio.h>
/**
  *main -entry point
  *return 0
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
