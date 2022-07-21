#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = _printf("Este es el numero %d\n", -5345);
	len2 = printf("Este es el numero %d\n", -5345);
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
