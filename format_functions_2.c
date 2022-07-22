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
	int nbytes, i;
	long n, k;
	char *ptr, *res;

	k = va_arg(ap, long);
	n = k;
	nbytes = 0;

	while (n != 0)
	{
		n = n / 2;
		nbytes++;
	}

	if (k == 0)
		nbytes = 1;

	ptr = calloc(nbytes, sizeof(char));

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


/**
 * func_octal - Expands a character specification with
 * a octal value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_octal(va_list ap)
{
	int nbytes, i;
	long n, k;
	char *ptr, *res;

	k = va_arg(ap, long);
	n = k;
	nbytes = 0;

	while (n != 0)
	{
		n = n / 8;
		nbytes++;
	}

	if (k == 0)
		nbytes = 1;

	ptr = calloc(nbytes, sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		ptr[i] = '0' + k % 8;
		k = k / 8;
	}

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}

/**
 * func_hex - Expands a character specification with
 * a hexadecimal value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_hex(va_list ap)
{
	int nbytes, i, ascii_displacement;
	long n, k;
	char *ptr, *res;

	k = va_arg(ap, long);
	n = k;
	nbytes = 0;
	ascii_displacement = 39;

	while (n != 0)
	{
		n = n / 16;
		nbytes++;
	}

	if (k == 0)
		nbytes = 1;

	ptr = calloc(nbytes, sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		if (k % 16 > 9)
			ptr[i] = '0' + (k % 16) + ascii_displacement;
		else
			ptr[i] = '0' + (k % 16);
		k = k / 16;
	}

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}

/**
 * func_HEX - Expands a character specification with
 * a hexadecimal value with capital letters.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_HEX(va_list ap)
{
	int nbytes, i, ascii_displacement;
	long n, k;
	char *ptr, *res;

	k = va_arg(ap, long);
	n = k;
	nbytes = 0;
	ascii_displacement = 7;

	while (n != 0)
	{
		n = n / 16;
		nbytes++;
	}

	if (k == 0)
		nbytes = 1;

	ptr = calloc(nbytes, sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		if (k % 16 > 9)
			ptr[i] = '0' + (k % 16) + ascii_displacement;
		else
			ptr[i] = '0' + (k % 16);
		k = k / 16;
	}

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}
