#include "main.h"
/**
 * print_triangle - Print a triangle shape
 * @size: The size of the traingle
 * Return: void
 **/

void print_triangle(int size)
{
	int i, j, e;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (e = size - i; e > 0; e--)
			{
				_putchar(' ');
			}
			for (j = i; j > 0; j--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
