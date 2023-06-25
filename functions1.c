#include "main.h"

/**
 * print_int - prints an integer
 *
 * @args: list of arguments
 *
 * Return: number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int len = 0, copy = n, negative = 0, size, i = 0;
	char zero = '0', neg = '-';
	char *num;

	if (n == 0)
	{
		write(1, &zero, 1);
		return (1);
	}
	if (n < 0)
	{
		if (n == -2147483648)
		{
			negative = 2;
			n++;
		}
		else
			negative = 1;
		len++;
		write(1, &neg, 1);
		n = -n;
	}
	while (copy)
	{
		len++;
		copy /= 10;
	}
	if (negative)
		size = len - 1;
	else
		size = len;
	num = (char *)malloc(sizeof(char) * size);
	for (i = size - 1; i >= 0; i--)
	{
		num[i] = zero + (n % 10);
		n /= 10;
	}
	if (negative == 2)
		num[size - 1] = '8';
	for (i = 0; i < size; i++)
	{
		write(1, &num[i], 1);
	}
	free(num);
	return (len);
}
