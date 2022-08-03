#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * int_to_hex - Converts a integer to hex.
 * @k: The int to be converted.
 * Return: A pointer to the converted string.
 */


char *int_to_hex(int k)
{
	char *res;
	int nbytes = 2, i, ascii_displacement = 7;

	res = calloc(nbytes, sizeof(char));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < nbytes; i++)
	{
		if (k < 16)
		{
			res[0] = '0';
			i++;
		}

		if (k % 16 > 9)
			res[i] = '0' + (k % 16) + ascii_displacement;
		else
			res[i] = '0' + (k % 16);
		k = k / 16;
	}

	return (res);
}
