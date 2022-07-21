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

	if (c == 0)
	{
		ptr = malloc(sizeof(char) * 4);
		if (ptr == NULL)
			return (NULL);
		ptr = "nan";
		return (ptr);
	}	

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


/**
 25  * func_percent - Expands a character specification with
 26  * a percent value.
 27  * @ap: The list of variadic arguments.
 28  * Return: A pointer to the string.
 29  */

char *func_percent(__attribute__((unused)) va_list ap)
{
	char *ptr;

	ptr = malloc(sizeof(char));

	if (ptr == NULL)
		return (NULL);

 	ptr[0] = '%';

	return (ptr);
}
