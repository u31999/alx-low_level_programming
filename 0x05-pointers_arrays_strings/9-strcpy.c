#include "main.h"
/**
 * _strcpy - Copy src to dest
 * @dest: The new copy
 * @src: The resources
 * Return: 0
 **/

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
	return (dest);
}
