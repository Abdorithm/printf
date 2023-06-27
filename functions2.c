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
	char zero = '0';
	char *binary_num;
	int n = va_arg(args, int);
	unsigned int num = n, num_cp;

	if (n < 0)
	{
		return (-1);
	}

	if (num == 0)
	{
		write(1, &zero, 1);
		return (1);
	}

	while (num_cp)
	{
		size++;
		num_cp /= 2;
	}
	binary_num = (char *)malloc(size * sizeof(char));
	if (binary_num == NULL)
		return (-1);

	while (num)
	{
		binary_num[i] = zero + (num % 2);
		num /= 2;
		i++;
	}

	while (i >= 0)
	{
		write(1, &binary_num[i], 1);
		i--;
	}
	free(binary_num);
	return (size);
}
