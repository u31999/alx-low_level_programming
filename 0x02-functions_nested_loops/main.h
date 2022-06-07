void put_char(void)
{
	printf("_putchar\n");
}

void print_alphabet(void)
{
	int letter;

	for(letter = 'a'; letter <= 'z'; letter++){
		putchar(letter);
	}
	putchar('\n');
}
