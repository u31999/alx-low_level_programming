#include "main.h"
/**
 * puts_half - Print the second haif of string
 * @str: The string
 * Return: 0
 **/

void puts_half(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	i = (i + 1) / 2;

	for (; str[i]; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
