#include "main.h"
/**
 * print_alphabet_x10 - print alphabet 10 time
 *
 **/

void print_alphabet_x10(void)
{
	int letter, i;

	for (i = 0; i <= 9; i++)
	{
		letter = 'a';
		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
