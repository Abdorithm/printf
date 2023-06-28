#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	void *addr;

	addr = (void *)0x7ffe637541f0;
	_printf("%p\n", addr);
	return (0);
}
