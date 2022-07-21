#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * reverse_string - Reverses a string.
 * @str: The string to be reversed.
 * Return: A pointer to the reversed string.
 */


char *reverse_string(char *str)
{
	char *dest;
	int i, len = strlen(str);

	dest = calloc(len, sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		dest[len - i - 1] = str[i];
	}
	return (dest);
}
