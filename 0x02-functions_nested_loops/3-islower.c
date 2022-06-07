#include <stdio.h>
/**
 * _islower - find the lower or upper case
 * Return: 1 if lower else 0
 **/
int _islower(int c)
{
	int l = 'a';
	while (l <= 'z')
	{
		if(c == l) return (1);
		l++;
	}
	return (0);
}
