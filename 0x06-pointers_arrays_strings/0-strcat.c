#include "main.h"
/**
 * _strcat - Append to string
 * @dest: First string
 * @src: Second String
 * Return: Pointer to dest
 **/

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (dest[i] != '\0')
	{
		i++;
	}

	i += 1;

	for (j = 0; j != '\0'; j++)
	{
		dest[i] = src[j];
	}

	dest[i + j + 1] = '\0';

	return (dest);
}
