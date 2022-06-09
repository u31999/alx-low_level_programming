#include "main.h"

/**
 * _isdigit - Find if input is a digital number
 * @c: The input
 * Return: 0 or 1
 **/

int _isdigit(int c)
{
	if (c >= 47 && c <= 57)
		return (1);

	return (0);
}
