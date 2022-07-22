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


/**
 * func_S - Expands a character specification with
 * a String value and replace the non printable character
 * with hexadecimal number in capital letters.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_S(va_list ap)
{
	int i, len, j, counter;
	char *s = NULL, *ptr = NULL, *aux = NULL;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";

	counter = 0;
	j = 0;

	while (s[j] != 0)
 	{
  		if ((s[j]  < 32 && s[j] > 0) || s[j] >= 127)
			counter++;
		j++;
	}

	len = strlen(s);
	ptr = malloc(sizeof(char) * len + (counter * 3));

	if (ptr == NULL)
		return (NULL);

	counter = 0;
	i = 0;
  	while (s[i] != 0)
	{
		if ((s[i]  < 32 && s[i] > 0) || s[i] >= 127)
		{
			ptr[counter] = '\';
			ptr[counter + 1] = 'x';
			aux = int_to_hex(s[i]);
			ptr[counter + 2] = aux[0];
			ptr[counter + 3] = aux[1];
			counter += 3;
			free(aux);
		} else
			ptr[counter] = s[i];
		counter++;
		i++;
	}
	return (ptr);
}
