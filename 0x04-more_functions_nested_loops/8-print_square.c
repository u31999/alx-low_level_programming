#include "main.h"

/**
 * print_square - Print a square
 * @size: The size of the square
 * Return: void
 **/

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
		for (i = 1; i <= size; i++)
			_putchar('#');

	_putchar('\n');
}
