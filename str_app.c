#include "main.h"

/**
 * search - printf special char in hex
 * @n: Input
 *
 * Return: counter
 */

int search(char n)
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
 * print_str - printf special char in hex
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
		if (search(str[i]) != -1)
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

/**
 * print_address - printf address
 * @ptr: void pointre
 *
 * Return: counter
 */

int print_address(void *ptr)
{
	uintptr_t address = (uintptr_t) ptr;
	char hex_str[sizeof(uintptr_t) * 2 + 3];
	int index = 0, start = 2, end, digit, i = 0, count = 0;
	char temp;

	if (ptr == NULL)
	{
		return (write(1, "(nil)", 5));
	}
	hex_str[index] = '0';
	index++;
	hex_str[index] = 'x';
	index++;
	while (address > 0)
	{
		digit = address & 0xf;
		hex_str[index] = (digit < 10) ? ('0' + digit) : ('a' + digit - 10);
		index++;
		address >>= 4;
	}
	hex_str[index] = '\0';
	end = index - 1;
	while (start < end)
	{
		temp = hex_str[start];
		hex_str[start] = hex_str[end];
		hex_str[end] = temp;
		start++;
		end--;
	}
	while (hex_str[i] != '\0')
	{
		_putchar(hex_str[i]);
		i++;
		count++;
	}
	return (count);
}

/**
 * print_add - printf add in hex
 * @arg: Argument
 *
 * Return: counter
 */

int print_add(va_list arg)
{
	int n = 0;
	void *p = va_arg(arg, void*);

	n += print_address(p);
	return (n);
}
