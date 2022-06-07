/**
 * _isalpha - check for lower case letter
 * @c : character to check
 * Return:0 or 1
 */

int _isalpha(int c)
{
	int i;
	int j = 'A';

	for (i = 'a'; i <= 'z'; i++)
	{
		if (c == i || c == j)
			return (1);
		j++;
	}

	return (0);
}
