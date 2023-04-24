#include "main.h"

/**
 * switche -> find the character
 *
 * @list: argument
 * @format: character for switch
 *
 * Return: counter
 */

int switche(va_list list, char format)
{
	int count = 0;

	switch (format)
	{
		case 'c':
			count += print_chare(list);
			break;
		case 's':
			count += print_string(list);
			break;
		case 'd':
		case 'i':
			count += print_integer(list);
			break;
		case '%':
			_putchar('%');
			count++;
			break;
		case 'b':
			count += print_binary(list);
			break;
		case 'u':
			count += print_u_integer(list);
			break;
		case 'o':
			count += print_octal(list);
			break;
		default:
			_putchar('%');
			_putchar(format);
			count += 2;
	}

	return (count);
}
