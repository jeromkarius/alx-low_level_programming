#include<stdio.h>
/**
 *main - Entry Point
 *description: 'print _putchar'
 *Return: Always 0 (success)
 */
int main(void)
{

char *sh = "_putchar";
while (*sh)

{

putchar(*sh);
sh++;

}

putchar('\n');
return (0);

}
