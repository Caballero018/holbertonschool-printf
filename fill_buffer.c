#include <stdio.h>
#include "main.h"
#include <string.h>

/**
  * fill_buffer - Fills a buffer with characters and increases a counter.
  * @res: the pointer to the string of characters to fill the buffer.
  * @stringf: a pointer to the structure that cointains the buffer
  * and the counter
 * Return: Nothing.
 */

void fill_buffer(char *res, struct op *stringf)
{
	int j, len = strlen(res);

	if (len == 0)
		len = 1;

	for (j = 0; j < len; j++)
	{
		stringf->buffer[stringf->counter] = res[j];
		stringf->counter++;
	}
}
