#include "main.h"

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

	/* process the string normally except char % with s, c, d, or i */
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
