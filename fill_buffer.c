#include <stdio.h>
#include "main.h"
#include <string.h>


void fill_buffer(char *res, struct op *stringf)
{
	int j, len = strlen(res);

	if (strcmp(res, "nan") == 0)
	{
		stringf->counter++;
		return;
	}

	for (j = 0; j < len; j++)
	{
 		stringf->buffer[stringf->counter] = res[j];
 		stringf->counter++;
	}
}
