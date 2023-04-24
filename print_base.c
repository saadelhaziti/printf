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

/**
* print_octal - prints a number in octal base
*
* @arg: argument
*
* Return: number of symbols
*/

int print_octal(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int len = 0, num_digits = 0, temp, divisor, digit, i;

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		temp = n;
		while (temp != 0)
		{
			temp /= 8;
			num_digits++;
		}
		divisor = 1;
		for (i = 1; i < num_digits; i++)
		{
			divisor *= 8;
		}
		while (divisor != 0)
		{
			digit = n / divisor;
			_putchar(digit + '0');
			n %= divisor;
			divisor /= 8;
			len++;
		}
	}
	return (len);
}

























