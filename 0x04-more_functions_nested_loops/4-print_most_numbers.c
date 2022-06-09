#include "main.h"

/**
 * print_most_numbers - Print digits from 0 - 9, without 2 or 4
 * Return: void
 *
 **/

void print_most_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
			i++;
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
