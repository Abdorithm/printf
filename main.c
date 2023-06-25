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
    int len2, len3, len4;
/*	int num = 133534;*/
	char s[11] = "Abdelrahman";

	len3 = printf("%r\n");
	len4 = _printf("%r\n");
	printf("len = %d and %d\n", len3, len4);
	len3 = printf("%c\n", s[0]);
    len4 = _printf("%c\n", s[0]);
	printf("len = %d and %d\n", len3, len4);
    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    return (0);
}
