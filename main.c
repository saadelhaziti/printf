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
    void *addr;
    int n = 0;

    addr = (void *)0x7ffe637541f0;
    n = _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);

    printf("%d",n);

	return (0);
}
