#include <stdio.h>
/**
 * main - Enty point
 *
 * Return: 0
 *
 **/

int main(void)
{
	char i, letter;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}
