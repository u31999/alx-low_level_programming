#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check if positive or negative
 *
 * Return: 0
 **/

void positive_or_negative(int i)
{

	if (i < 0)
		printf("%d is negative\n", i);
	
	else if (i > 0)
		printf("%d is positive\n", i);
	
	else
		printf("%d is zero\n", i);

}
