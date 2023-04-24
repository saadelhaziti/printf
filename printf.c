#include "main.h"

/**
 * _printf -> Prints a formatted string
 *
 * @format: Input String Format
 *
 * Return: Number chars Printed
 */

int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);
	while (format && *format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == '\0' || ((*format == ' ') && (*(format + 1) == '\0')))
			{
				return (-1);
			}
			else
			{
				count += switche(list, *format);
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);
	return (count);
}
