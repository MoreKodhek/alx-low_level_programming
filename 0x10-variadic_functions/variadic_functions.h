#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct check - structure defining a format specifier
 * @c: type
 * @f: the function to handle the format specifier
 * @chk: format specifier sting
*/
typedef struct check
{
char *chk;
void (*f)(va_list list);
} check_t;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif

