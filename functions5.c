#include "main.h"

/**
 * cvt_hex - prints ascii code of a non-printable character
 * @c: character
 *
 * Return: void
 */
void cvt_hex(unsigned int c)
{
	int i, size = 0;
	unsigned num = c;
	char *hex_char, *hex = "ABCDEF";

	while (num)
	{
		size++;
		num /= 16;
	}

	hex_char = (char *)malloc(size * sizeof(char));
	if (hex_char)
	{
		i = size - 1;
		while (c)
		{
			if ((c % 16) > 9)
			{
				hex_char[i] = hex[(c % 16) - 10];
			}
			else
			{
				hex_char[i] = '0' + (c % 16);
			}
			c /= 16;
			i--;
		}
		i = 0;
		while (i < size)
		{
			_putchar(hex_char[i]);
			i++;
		}
	}
}

/**
 * print_string - prints a string
 * @args: argument list
 *
 * Return: number of the printed characters
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int i = 0, len = 0, curr_char;

	if (!s)
		return (0);

	while (s[i] != '\0')
	{
		if ((s[i] > 0 && s[i] < 32) || (s[i] >= 127))
		{
			_putchar('\\');
			_putchar('x');

			len = len + 4;
			curr_char = s[i];

			if (curr_char < 16)
			{
				_putchar('0');
			}

			/* convert to hexadecimal */
			cvt_hex(curr_char);
		}
		else
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
