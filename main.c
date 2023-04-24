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
    unsigned int y=4293967290, m=0;
	m=_printf("print uns int %u\n", y);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %o\n", y);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %x\n", y);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %X\n", y);
	_printf("len of the output : %d\n",m);
	return (0);
}
