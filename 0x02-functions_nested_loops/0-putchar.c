#include<stdio.h>
/**
 * main - Entry Point
 * description: 'print _putchar'
 * return always 0 (success)
 */
int main(void)
{

char *sh = "_putcha";
while (*sh)

{

putchar(*sh);
sh++;

}

putchar('\n');
return (0);

}
