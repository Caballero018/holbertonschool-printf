#include "main.h"

/**
 * func_char - Returns a pointer to the character.
 * 
 * @a: The uniq character.
 * 
 * Return: A pointer to the character.
 */
char* func_char(va_list ap)
{
	char c, *ptr;
	

	c = va_arg(ap, int);
	ptr = malloc(sizeof(char));
	*ptr = c;

	return (ptr);
}

