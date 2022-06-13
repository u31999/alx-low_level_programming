#include "main.h"
/**
 * swap_int - Swap the value of two integer
 * @a: Pointer to integer one
 * @b: Pointer to integer two
 * Return: void
 **/

void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
