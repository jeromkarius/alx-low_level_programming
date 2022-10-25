#include"main.h"
/**
  * _isalpha - int
  * @c : int
  * Return 1 or else 0
  */

int _isalpha(int c)

{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
return (1);
else
return (0);
}
