#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * _prinf - Function that produces output
 * according to a format.
 *
 * @format: String to be formatted.
 * Return: The number of characters printed (excluding the null
 * byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	int i = 0;
	char *(*ptr)(va_list);
	char *res;
	string_to_print stringf;
	va_list ap;

	va_start(ap, format);

	stringf.counter = 0;

	while (format[i] != 0)
	{
		if (format[i] == '%')
		{
			ptr = get_op_func(format[i+1]);
			res = ptr(ap);
			stringf.buffer[stringf.counter] = res[0];
			stringf.counter++;
			i++;
		}
		else
		{
			stringf.buffer[stringf.counter] = format[i];
			stringf.counter++;
		}
		i++;
	}
	write(1, stringf.buffer, stringf.counter);
	return(stringf.counter);
}
