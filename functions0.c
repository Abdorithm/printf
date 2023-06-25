#include "main.h"

/**
 * print_unknown - prints unknown specifiers like %r
 * @c: list of arguments
 *
 * Return: number of characters printed
 */
int print_unknown(char c)
{
	char x = '%';

	if(c == '\0')
		return (-1);
	write(1, &x, 1);
	write(1, &c, 1);
	return (2);
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
