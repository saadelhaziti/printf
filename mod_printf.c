#include "main.h"

/**
 * _putchar - writes the character c to stdout
 *
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * print_chare - prints a character
 *
 * @arg: Argument
 *
 * Return: counter
 */

int print_chare(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	_putchar(alpha);
	return (1);
}

/**
 * print_string - print a string
 *
 * @arg: Argument
 *
 * Return: counter
 */

int print_string(va_list arg)
{
	char *str;
	char *null_errer = "(null)";
	int i = 0;

	str = va_arg(arg, char *);
	if (str != NULL)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}

	}
	else
	{
		while (*null_errer)
		{
			_putchar(*null_errer);
			null_errer++;
			i++;
		}

	}
	return (i);
}

/**
 * print_integer - print an integer
 *
 * @arg: argument
 *
 * Return: counter
 */

int print_integer(va_list arg)
{
	int n = va_arg(arg, int);
	int len = 0, num_digits = 0, divisor, digit, i;

	if (n == INT_MIN)
	{
		return (print_min_int());
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		len++;
	}

	if (n == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		num_digits = count_digits(n);
		divisor = 1;
		for (i = 1; i < num_digits; i++)
		{
			divisor *= 10;
		}

		while (divisor != 0)
		{
			digit = n / divisor;
			_putchar(digit + '0');
			n %= divisor;
			divisor /= 10;
			len++;
		}
	}
	return (len);
}


/**
 * print_binary - print a number in binary form
 *
 * @arg: argument
 *
 * Return: counter
 */

int print_binary(va_list arg)
{
	unsigned int n = va_arg(arg, unsigned int);
	int count = 0, i, rest;
	char binery[64];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n)
	{
		rest = n % 2;
		n = n / 2;
		binery[count] = rest;
		count++;
	}

	i = count - 1;
	while (i >= 0)
	{
		_putchar(binery[i] + '0');
		i--;
	}
	return (count);
}
