#include "main.h"
#include <math.h>

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

	len = strlen(s);
	ptr = malloc(sizeof(char) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = s[i];
	}

	return (ptr);
}


/**
 * func_percent - Expands a character specification with
 * a percent value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_percent(__attribute__((unused)) va_list ap)
{
	char *ptr;

	ptr = malloc(sizeof(char));

	if (ptr == NULL)
		return (NULL);

	ptr[0] = '%';

	return (ptr);
}

/**
 * func_unsigned_integer - Expands a character specification with
 * a integer value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_unsigned_integer(va_list ap)
{
	int nbytes, i;
	unsigned int k, n;
	char *ptr, *res;

	k = va_arg(ap, int);

	n = k;
	nbytes = 0;

	while (n != 0)
	{
		n = n / 10;
		nbytes++;
	}
	if (k == 0)
		nbytes = 1;

	ptr = calloc(nbytes, sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		ptr[i] = '0' + k % 10;
		k = k / 10;
	}

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}

/**
 * func_decimal - Expands a character specification with
 * a decimal value.
 * @ap: The list of variadic arguments.
 * Return: A pointer to the string.
 */

char *func_decimal(va_list ap)
{
	int nbytes, n, i, k, flag;
	char *ptr, *res;

	k = va_arg(ap, int);
	flag = 0;

	if (k < 0)
		flag = 1;
	n = labs(k);
	nbytes = 0;

	while (n != 0)
	{
		n = n / 10;
		nbytes++;
	}

	if (k == 0)
		nbytes = 1;
	if (flag == 1)
		ptr = calloc(nbytes + 1, sizeof(char));
	else
		ptr = calloc(nbytes, sizeof(char));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < nbytes; i++)
	{
		ptr[i] = '0' + labs(k) % 10;
		k = labs(k) / 10;
	}
	if (flag == 1)
		ptr[i] = '-';

	res = reverse_string(ptr);
	free(ptr);
	return (res);
}
