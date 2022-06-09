#include <stdio.h>

/**
 * main - Enty point
 * Return: Always 0
 **/

int main(void)
{
	long n = 612852475143;
	int i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n = n / i;
	}

	printf("%lu\n", n);
	return (0);
}
