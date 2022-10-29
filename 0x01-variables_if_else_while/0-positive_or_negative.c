#include <stdlib.h>
#include <time.h>
#include<stdio.h>
/**
  * main - void
  * Description : return negative or positive
  * return always 0 (success)
  */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if ((n % 10) > 0)
{
printf("%d is positive\n", n);
}
else if ((n % 10) == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}
