#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

/**
 * struct op - Struct op
 *
 * @counter: The counter
 * @buffer: The buffer to save the string.
 */

struct op
{
	int counter;
	char buffer[2000];
};

/**
 * struct formats - Struct formats
 *
 * @format: The character that specify the format.
 * @f: The function that expands a specfic format.
 */

typedef struct formats
{
	char *format;
	char *(*f)(va_list ap);
} op_t;

int _printf(const char *format, ...);
char *func_char(va_list ap);
char *func_string(va_list ap);
char *func_percent(va_list ap);
char *func_integer(va_list ap);
char *func_decimal(va_list ap);
char *func_binary(va_list ap);
char *func_octal(va_list ap);
char *reverse_string(char *str);
char *(*get_op_func(char s))(va_list);
void fill_buffer(char *res, struct op *stringf);

#endif /* PRINTF_H */
