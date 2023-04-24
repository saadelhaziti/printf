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

	m=_printf("print uns int %u\n", y);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %u\n", n);
	_printf("len of the output : %d\n",m);
	m=_printf("print uns int %u\n", 4294967295);
	_printf("len of the output : %d\n",m);
	return (0);
}
