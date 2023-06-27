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
 * convert_to_base - converts unsinged int to base b
 * @args: list of arguements
 * @b: base to convert to
 *
 * Return: printed characters
 */
int convert_to_base(va_list args, int b)
{
	int i, size = 0;
	char *num_str;
	unsigned int num = va_arg(args, unsigned int), num_cp = num;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	while (num_cp)
	{
		size++;
		num_cp /= b;
	}
	num_str = (char *)malloc(sizeof(char) * size);
	if (num_str == NULL)
		return (-1);
	
	i = size - 1;
	while (num)
	{
		num_str[i] = '0' + (num % b);
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
