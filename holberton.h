#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

/**
 * struct op - Struct op
 *
 * @counter: The counter
 * @buffer: The buffer to save the string.
 */

struct op
{
	int counter;
	char buffer[2000];
};


#endif /* HOLBERTON_H */
