#include "main.h"

/**
 * print_line - prints '_' n times
 *
 * @n: number of times for '_' to be printed
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}

	_putchar('\n');
}
