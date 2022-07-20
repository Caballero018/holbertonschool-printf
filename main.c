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
    int len;
    int len2;
    
    len = _printf("Should print a single percent sign: %%\n");
    len2 = _printf("Should print a single percent sign: %%\n");

    printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}
