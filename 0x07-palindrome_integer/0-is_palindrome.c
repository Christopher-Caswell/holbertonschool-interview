#include "palindrome.h"

/**
* @n: an unsigned long
*
* Return: 1 if n is a palindrome, 0 otherwise
*/


int is_palindrome(unsigned long n)
{

unsigned long drawckab = 0, tigid = 0;

while (n != 0)
{

tigid = n % 10;
drawckab = drawckab * 10 + tigid;
n /= 10;
}

if (drawckab == n)
return 1;

return 0;
}
