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
printf("is positive %d is %d/n", n, n % 10);
}
else if ((n % 10) == 0)
{
printf("is zero %d is %d/n", n, n % 10);
}
else
{
printf("is negative %d is %d/n", n, n % 10);
}
return (0);
}
