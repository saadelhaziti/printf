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
	int count = 0, i = 0;
	string funcs[] = {
		{'c', print_chare}, {'i', print_integer}, {'d', print_integer},
		{'s', print_string}, {'u', print_u_integer}, {'o', print_octal},
		{'x', print_hex}, {'X', print_hex_upper}, {'b', print_binary},
		{'S', print_str}, {'p', print_add}, {'\0', NULL}
	};

	i = 0;
	while ((format != funcs[i].str) && (funcs[i].str != '\0'))
	{
		i++;
	}
	if (funcs[i].str != '\0')
	{
		count += funcs[i].print(list);
	}
	else if (format == '%')
	{
		_putchar('%');
		count++;
	}
	else
	{
		_putchar('%');
		_putchar(format);
		count += 2;
	}

	return (count);
}
