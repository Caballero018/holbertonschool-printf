#include <stdio.h>
#include "holberton.h"
#include <string.h>

/**
  * fill_buffer - Fills a buffer with characters and increases a counter.
  * @res: the pointer to the string of characters to fill the buffer.
  * @stringf: a pointer to the structure that cointains the buffer
  * @c: a char that specifies if format is string.
  * and the counter
 * Return: Nothing.
 */

void fill_buffer(char *res, struct op *stringf, char c)
{
	int j, len = strlen(res);

	if (strcmp(res, "\0")  == 0 && c != 's' && c != 'S')
		len = 1;

	for (j = 0; j < len; j++)
	{
		stringf->buffer[stringf->counter] = res[j];
		stringf->counter++;
	}
}
