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
	return (n);
}
