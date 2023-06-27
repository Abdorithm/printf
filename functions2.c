#include "main.h"

/**
 * print_binary - converts unsinged int to binary
 * @args: list of arguements
 *
 * Return: printed characters
 */
int print_binary(va_list args)
{
	return (convert_to_base(args, 2));
}
