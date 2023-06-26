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
	int len4;

	len4 = _printf("%R\n", "ABCD is 1234");
	printf("Length:[%d, %i]\n", len4, len4);
    return (0);
}
