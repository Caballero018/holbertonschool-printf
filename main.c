#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2;

	len = _printf("- What did you say?\n- %S\n- That's what I thought.\n", "");
	len2 = printf("- What did you say?\n- %s\n- That's what I thought.\n", "");
	fflush(stdout);
	printf("%d\n", len);
	printf("%d\n", len2);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		fflush(stdout);
		return (1);
	}
	return (0);
}
