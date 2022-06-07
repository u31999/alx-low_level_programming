/**
 * _isalpha: Check if a charcter is alphabetic
 * @c: charcter to be checked
 * Return: if letter 1, else 0
 **/

int _isalpha(int c) {
	int i;
	int j = 'A';
	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i || c == j) return (1);
		j++;
	}
	return (0);
}
