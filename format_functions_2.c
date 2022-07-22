#include "main.h"
#include <string.h>

/**
 * func_binary - Expands a character specification with
 * a binary value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_binary(va_list ap)
{
	int nbytes, n, i, k;
	char *ptr, *res;

	k = va_arg(ap, int);
	n = k;
	nbytes = 0;

	while (n != 0)
	{
		n = n / 2;
		nbytes++;
	}

	ptr = malloc(sizeof(char) * nbytes);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		ptr[i] = '0' + k % 2;
		k = k / 2;
	}

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}
