#include<stdio.h>
/**
  *main - entry point
  *return 0
  */
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'd'; ch++)
for (ch = 'f'; ch <= 'p'; ch++)
for (ch = 'r'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
