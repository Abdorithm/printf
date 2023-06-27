#include "main.h"

/**
 * choose_f - chooses the right modifier.
 * @c: ...
 * @args: ...
 *
 * Return: n
 */
int choose_f(char c, va_list args)
{
	int n = -1;

	if (c == 'd' || c == 'i')
		n = print_int(args);
	else if (c == '%')
		n = print_percent(1);
	else if (c == 'c')
		n = print_char(args);
	else if (c == 's')
		n = print_str(args);
	else if (c == 'r')
		n = print_rstr(args);
	else if (c == 'R')
		n = print_rot13_str(args);
	else if (c == 'b')
		n = print_binary(args);
	else if (c == 'u')
		n = print_unsigned(args);
	else if (c == 'o')
		n = print_octal(args);
	else
		n = print_unknown(c);
	return (n);
}
