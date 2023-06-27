#include "main.h"

/**
 * _putchar - prints a character
 * @c: the character to be printed
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * get_size - get size of numbers' digits
 * @n: number
 * @b: base
 *
 * Return: size
 */
int get_size(unsigned int n, int b)
{
	int size = 0;

	while (n)
	{
		size++;
		n /= b;
	}
	return (size);
}

/**
 * check_hex_format - checks hex format
 * @rem: remainder
 * @f: format
 *
 * Return: ascii value of a letter
 */
int check_hex_format(int rem, char f)
{
	char *hex = "abcdef";
	char *HEX = "ABCDEF";

	if (f == 'x')
	{
		return (hex[rem - 10]);
	}
	if (f == 'X')
	{
		return (HEX[rem - 10]);
	}
	return (0);
}

/**
 * convert_to_base - converts unsinged int to base b
 * @args: list of arguements
 * @b: base to convert to
 *
 * Return: printed characters
 */
int convert_to_base(va_list args, int b, char format)
{
	int i, size, remainder;
	char *num_str;
	unsigned int num = va_arg(args, unsigned int);

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	size = get_size(num, b);
	num_str = (char *)malloc(sizeof(char) * size);
	if (num_str == NULL)
		return (-1);

	i = size - 1;
	while (num)
	{
		remainder = num % b;
		if (b == 16 && remainder > 9)
		{
			remainder = check_hex_format(remainder, format);
			num_str[i] = remainder;
		}
		else
		{
			num_str[i] = '0' + (num % b);
		}
		num /= b;
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
