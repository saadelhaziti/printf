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
    int n = 0;
    char str[]="Best~School";
    n = _printf("%Hello world%");
    printf("\n%d\n",n);
    n = _printf("%Hello world");
    printf("\n%d\n",n);
    n = _printf("Hello world%");
    printf("\n%d\n",n);
	n = _printf("%");
    printf("\n%d\n",n);
	n = _printf("% Hello world");
    printf("\n%d\n",n);
    
	n=_printf("%S\n", str);
    printf("\n%d\n",n);

	return (0);
}
