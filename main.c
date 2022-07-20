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

    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);

    printf("%d\n", len);
    printf("%d\n", len2);

    return (0);
}
