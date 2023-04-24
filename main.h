#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>

int _putchar(char c);
int print_chare(va_list arg);
int print_string(va_list arg);
int _printf(const char *format, ...);
int print_integer(va_list arg);
int print_binary(va_list arg);
int switche(va_list list, char format);
int print_min_int(void);
int count_digits(int n);
int print_u_integer(va_list arg);

#endif
