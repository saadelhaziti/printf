#include "main.h"

/**
* print_u - print unsigned int
*
* @num: the number input
*
* Return: count of the unsigned int
*/

int print_u(unsigned int num)
{
int count = 0;

if (num / 10)
{
count += print_u(num / 10);
}
count += _putchar((num % 10) + '0');

return (count);
}

/**
* print_u_integer - counts the number of digits
*
* @arg: argement
*
* Return: count of the unsigned int
*/

int print_u_integer(va_list arg)
{
unsigned int n = va_arg(arg, unsigned int);
return (print_u(n));
}


