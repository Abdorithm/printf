#include "main.h"

/**
 * print_address - prints a pointer address
 * @args: argument list
 *
 * Return: number of the printed charcaters
 */
int print_address(va_list args)
{
	char *s_null = "(nil)";
	int len = 0, i;
	unsigned long int add;
	void *ptr = va_arg(args, void*);

	if (ptr == NULL)
	{
		i = 0;
		while (s_null[i] != '\0')
		{
			_putchar(s_null[i]);
			i++;
		}
		return (i);
	}

	add = (unsigned long int)ptr;

	_putchar('0');
	_putchar('x');

	len = cvt_hex(add, 'x') + 2;

	return (len);
}
