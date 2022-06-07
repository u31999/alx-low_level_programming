#include <stdio.h>

void print_alphabet(void)
{
        int letter;

        for(letter = 'a'; letter <= 'z'; letter++){
                putchar(letter);
        }
        putchar('\n');
}
