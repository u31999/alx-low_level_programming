#include "main.h"
/**
 * print_array - Print array element seprated by comma
 * @a: The array pointer
 * @n: The number of element to be printed
 * Return:void
 **/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i == n - 1)
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}

	printf("\n");

}
