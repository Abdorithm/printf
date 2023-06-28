#include "main.h"

/**
 * check_flags - checks flags
 * @f: flag
 * @f2: format
 *
 * Return: void
 */
int check_flags(char f, char f2)
{
	if (f == '+')
	{
		_putchar('+');
		return (1);
	}
	if (f == ' ')
	{
		_putchar(' ');
		return (1);
	}
	if (f == '#')
	{
		_putchar('0');
		if (f2 == 'x')
			_putchar('x');
		if (f2 == 'X')
			_putchar('X');
		return (1);
	}
	return (0);
}
/**
 * _printf - a variadic function that prints formatted strings.
 * @format: input string
 *
 * Return: number of chars printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, chars = 0, new_printed = 0;

	/* process the string normally except char % with s, c, d, r, R, or i */
	if (format == NULL)
		return (-1);

	va_start(ap, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			chars++;
		}
		else
		{
			new_printed = 0;
			i++;
			if (check_flags(format[i], format[i + 1]))
			{
				new_printed++;
				i++;
			}
			new_printed = choose_f(format[i], ap);
			/* Negative error in failures */
			if (new_printed < 0)
				return (-1);
			chars += new_printed;
		}
	}
	va_end(ap);
	return (chars);
}
