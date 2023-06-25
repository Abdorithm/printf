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

/**
 * print_percent - Prints a percent sign
 * @one: one char printed
 *
 * Return: always 1
 */
int print_percent(int one)
{
	char s = '%';
	return (write(1, &s, one));
}

/**
 * print_char - prints a char
 * @args: argument
 *
 * Return: always 1
 */
int print_char(va_list args)
{
	char x = va_arg(args, int);

	return (write(1, &x, 1));
}

/**
 * print_str - ...
 * @args: ...
 *
 * Return: length of strings
 */
int print_str(va_list args)
{
	int i = 0;
	char *s = va_arg(args, char *);

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i] != '\0'; i++)
	{
		write(1, &s[i], 1);
	}
	return (i);
}
