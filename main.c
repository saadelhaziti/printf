#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len = 0, nb = 42, nd = 423423424, nm = 56, n = 0;

	int num = -2147483648;
	int num2 = 2147483647;
	unsigned int len1 = 3467;
	int len2;

	len2 = _printf("Negative:[%b] [%b] [%b] [%b]\n", len, nb, nd, nm);
	_printf("%d\n", len2);
	len2 = _printf("Negative:[%b]\n", len1);
	_printf("%d\n", len2);
	_printf("%d\n", num);
	_printf("%d\n", num2);
	_printf("The value of num is: %s\n", "");
	_printf("%");
	n = _printf("dfdhuggho");
	_printf("\n%d\n",n);
	n = _printf("fghfhfh%");
	_printf("\n%d",n);
	n = _printf("%s");
	_printf("\n%d",n);
	n = _printf("%s");
	_printf("\n%d",n);
	n = _printf("dfdhuggho");
	_printf("\n%d\n",n);


	return (0);
}
