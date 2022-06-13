#include "main.h"
/**
 * _puts - Write out a string
 * @str: The string
 * Return: void
 **/

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
