#include "main.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct function to perform
 * the format asked by the user.
 *
 * @s: The format passed as argument.
 *
 * Return: A pointer to the function corresponding
 * to the format given as a parameter.
 */
char* (*get_op_func(char s))(va_list)
{
	op_t func[] = {
		{"c", func_char},
		{"s", func_string},
		{"%", func_percent},
		{"i", func_decimal},
		{"d", func_decimal},
		{"b", func_binary},
		{NULL, NULL},
	};

	int i = 0;

	while (func[i].format != NULL && *(func[i].format) != s)
		i++;

	return (func[i].f);
}
