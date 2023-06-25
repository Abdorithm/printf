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
	int len = 0;
	int copy = 0;
	char tmp, zero = '0';

	if (n == 0)
	{
		write(1, &zero, 1);
		return (1);
	}
	if (n < 0)
	{
		len++;
		write(1, "-", 1);
		n = -n;
	}
	while (n)
	{
		copy *= 10;
		copy += n % 10;
		n /= 10;
	}
	while (copy)
	{
		len++;
		tmp = (zero + (copy % 10));
		write(1, &tmp, 1);
		copy /= 10;
	}
	return (len);
}
