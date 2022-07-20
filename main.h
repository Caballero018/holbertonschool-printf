#ifndef PRINTF_H
#define PRINTF_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * struct op - Struct op
 *
 * @counter: The counter
 * @buffer: The buffer to save the string.
 */

typedef struct op
{
	int counter;
	char buffer[1024];
} string_to_print;

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
char *(*get_op_func(char s))(va_list);

#endif /* PRINTF_H */
