#include<stdio.h>


/**
 * Main - Print "int",
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */


int main(void)

{

fprintf(stderr, "size of a char: %ld byte(s)\n", sizeof(char));
fprintf(stderr, "size of an int: %ld byte(s)\n", sizeof(int));
fprintf(stderr, "size of a long int: %ld byte(s)\n", sizeof(long int));
fprintf(stderr, "size of a long long int: %ld byte(s)\n", sizeof(long long int));
fprintf(stderr, "size of a float: %ld byte(s)\n", sizeof(float));
return (0);
}
