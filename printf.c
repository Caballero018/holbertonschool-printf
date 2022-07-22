#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>
#include <string.h>

/**
 * _printf - Function that produces output
 * according to a format.
 *
 * @format: String to be formatted.
 * Return: The number of characters printed (excluding the null
 * byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int i = 0;
	char *res, *(*ptr)(va_list);
	struct op stringf;
	va_list ap;

	va_start(ap, format);
	stringf.counter = 0;
	if (format != NULL && !(format[0] == '%' && format[1] == 0))
	{
		while (format[i] != 0)
		{
			ptr = get_op_func(format[i + 1]);
			if (format[i] == '%' && ptr != NULL)
			{
				res = ptr(ap);
				fill_buffer(res, &stringf, format[i + 1]);
				free(res);
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
		return (stringf.counter);
	}
	return (-1);
}
