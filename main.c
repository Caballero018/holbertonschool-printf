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
    char *ws = "hello";

    len = _printf("Let's try to printf  %s a simple sentence.\n", ws);
    len2 = printf("Let's try to printf  %s a simple sentence.\n", ws);

    printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}
