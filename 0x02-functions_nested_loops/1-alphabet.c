#include <stdio.h>
/**
 * print_alphabet - Print alphabet lowecase
 **/
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
}
