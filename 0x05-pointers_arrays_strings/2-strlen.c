#include "main.h"
/**
 * _strlen - Return the length of a string
 * @*s: Pointer to string
 * Return: Int
 **/
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
