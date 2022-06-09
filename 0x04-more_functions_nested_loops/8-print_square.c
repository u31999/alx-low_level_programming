#include "main.h"

/**
 * print_square - Print a square
 * @size: The size of the square
 * Return: void
 **/

void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size; j > 0; j--)
				_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}

}
