#include "main.h"
/**
 * puts_half - Print the second haif of string
 * @str: The string
 * Return: 0
 **/

void puts_half(char *str)
{
	int i = 0;
	int j;

	while (str[i] != '\0')
		i++;

	i = i / 2;

	for (j = 0; j <= i; j++)
	{
		_putchar(str[j + i]);
	}

	_putchar('\n');
}
