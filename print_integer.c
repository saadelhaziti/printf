#include "main.h"

/**
* print_min_int - prints the minimum integer
*
* Return: the length of the integer
*/

int print_min_int(void)
{
	char *min_int = "2147483648";
	int len = 0;

	_putchar('-');
	len++;
	while (*min_int != '\0')
	{
		_putchar(*min_int);
		len++;
		min_int++;
	}
	return (len);
}

/**
* count_digits - counts the number of digits
*
* @n: the number input
*
* Return: the number of digits
*/

int count_digits(int n)
{
	int num_digits = 0;

	while (n != 0)
	{
		n /= 10;
		num_digits++;
	}

	return (num_digits);
}
