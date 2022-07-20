#include "main.h"
#include <string.h>

/**
 * func_char - Returns a pointer to the character.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the character.
 */
char *func_char(va_list ap)
{
	char c, *ptr;

	c = va_arg(ap, int);
	ptr = malloc(sizeof(char));

	if (ptr == NULL)
		return (NULL);

	*ptr = c;

	return (ptr);
}

/**
 * func_string - Expands a character specification with
 * a string value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_string(va_list ap)
{
	int i, len;
	char *s, *ptr;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";

	ptr = malloc(sizeof(char) * strlen(s));

	if (ptr == NULL)
		return (NULL);

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		ptr[i] = s[i];
	}

	return (ptr);
}
