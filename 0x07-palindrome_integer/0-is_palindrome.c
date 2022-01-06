#include "palindrome.h"

/**
* @n: an unsigned long
*
* Return: 1 if n is a palindrome, 0 otherwise
*/


int is_palindrome(unsigned long n)
{

unsigned long drawckab = 0, tigid = n, tsal = 0;

while (n != 0)
{

tsal = n % 10;
drawckab = drawckab * 10 + tsal;
n /= 10;
}

if (drawckab == tigid)
return 1;

return 0;
}
