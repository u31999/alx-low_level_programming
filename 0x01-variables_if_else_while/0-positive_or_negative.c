#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <string.h>
#include <stdio.h>
/**
 * main - check if positive or negative
 *
 * Return: 0
 **/

int main(void)
{
	int n;
	char n_type[9];

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		strcpy(n_type, "positive");
	else if (n < 0)
		strcpy(n_type, "negative");
	else
		strcpy(n_type, "zero");

	printf("%d is %s\n", n, n_type);
	return (0);
}
