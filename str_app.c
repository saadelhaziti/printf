#include "main.h"

/**
 * rearch - printf spechle char in hex
 * @n: Inpute
 *
 * Return: counter
 */

int rearch(char n)
{
if (n < ' ' || n >= '~')
{
return (-1);
}
else
{
return (0);
}
}

/**
 * print_str - printf spechle char in hex
 * @arg: Argument
 *
 * Return: counter
 */

int print_str(va_list arg)
{
char *str = va_arg(arg, char *);
int  i = 0;
int count = 0;
while (str[i] != '\0')
{
if (rearch(str[i]) != -1)
{
_putchar(str[i]);
count++;
}
else
{
_putchar('\\');
_putchar('x');
count += 2;
if (str[i] < 16)
{
_putchar('0');
count += _printf("%X", str[i]);
count++;
}
else
{
count += _printf("%X", str[i]);
}
}
i++;
}
return (count);
}
