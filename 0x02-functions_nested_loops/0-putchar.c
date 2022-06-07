#include "main.h"
/**
 * main - Entry Point
 *
 * Return: 0
 *
 *
 **/

/* put_char - return void*/

int main(void)
{
	char *l = "_putchar";
	while(*l)
	{
		_putchar(*l);
		l++;
	}
	_putchar('\n');
	return (0);
}
