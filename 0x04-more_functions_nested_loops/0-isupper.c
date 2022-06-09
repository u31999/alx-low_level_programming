#include "main.h"
/**
 * _isupper - Find if charcter is uppercase
 * @c: Chrcter to be checked
 * Return: 1 or 0
 *
 **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	return (0);
}
