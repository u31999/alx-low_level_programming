#include "main.h"
/**
 * puts2 - Print every other charcter followed by a new line
 * @str: The input string
 * Return: void
 **/

void puts2(char *str)
{
	int i = 0;
	int j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j <= i)
	{
		_putchar(str[j]);
		j += 2;
	}

	_putchar('\n');

}
