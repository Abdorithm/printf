#include "main.h"

/**
 * print_unsigned - prints unsigned integer
 * @args: argument list
 *
 * Return: number of printed characters
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	unsigned int num_cp = num;
	char *num_str;
	int i, size = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num_cp)
	{
		size++;
		num_cp /= 10;
	}

	num_str = (char *)malloc(sizeof(char) * size);
	if (num_str == NULL)
	{
		return (-1);
	}

	i = size - 1;
	while (num)
	{
		num_str[i] = '0' + (num % 10);
		num /= 10;
		i--;
	}

	i = 0;
	while (i < size)
	{
		_putchar(num_str[i]);
		i++;
	}
	free(num_str);
	return (size);

}

/**
 * print_octal - prints octal numbers
 * @args: argument list
 *
 * Return: number of printed charactes
 */
int print_octal(va_list args)
{
	return (convert_to_base(args, 8, 'o'));
}

/**
 * print_hex - prints hexadecimal numbers in lower case
 * @args: argument list
 *
 * Return: number of printed characters
 */
int print_hex(va_list args)
{
	return (convert_to_base(args, 16, 'x'));

}

/**
 * print_HEX - prints hexadecimal in uppuercase
 * @args: argument list
 *
 * Return: number of printed characters
 */
int print_HEX(va_list args)
{
	return (convert_to_base(args, 16, 'X'));
}
