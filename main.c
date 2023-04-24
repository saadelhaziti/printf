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
	unsigned int y=2424, n=0,m=0;
	unsigned int ui;

	m = _printf("print uns int %o\n", y);
	_printf("len of the output : %d\n", m);
	m = _printf("print uns int %o\n", n);
	_printf("len of the output : %d\n", m);
	m = _printf("print uns int %o\n", 4294967295);
	_printf("len of the output : %d\n", m);
	ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned octal:[%o]\n", ui);
	printf("Unsigned octal:[%o]\n", ui);
	return (0);
}
