#include "main.h"
#include <stdio.h>

/**
 * print_binary - converts unsinged int to binary
 * @args: list of arguements
 *
 * Return: printed characters
 */
int print_binary(va_list args)
{
	int i = 0, size = 0;
	char zero = '0', null_op = '\0';
	char *binary_num;
	unsigned int num = va_arg(args, unsigned int), num_cp = num;

	if (num == 0)
	{
		write(1, &zero, 1);
		return (1);
	}

	if (num < 1)
		return (-1);

	while (num_cp)
	{
		size++;
		num_cp /= 2;
	}
	binary_num = (char *)malloc(sizeof(char) * size + 1);
	if (binary_num == NULL)
		return (-1);

	while (num)
	{
		binary_num[i] = zero + (num % 2);
		num /= 2;
		i++;
	}

	i = size;
	while (i >= 0)
	{
		write(1, &binary_num[i], 1);
		i--;
	}
	write(1, &null_op, 1);

	free(binary_num);
	return (size);
}
