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
    int y=17, n=0,m=0;
	m=_printf("print uns int %X\n", y);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %X\n", n);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %X\n", 243555);
	_printf("len of the output : %d\n",m);
	return (0);
}
