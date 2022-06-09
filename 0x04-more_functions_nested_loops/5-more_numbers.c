#include "main.h"

/**
 * more_numbers - Print digits from 0 to 14, 10 times
 * Return: void
 **/

void more_numbers(void)
{
	int i = 0;
	int j;
	int f_num, s_num;

	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j < 10)
			{
				f_num = j;
			}
			else
			{
				f_num = j / 10;
			}

			_putchar(f_num + '0');
			if (j > 9)
			{
				s_num = j % 10;
				_putchar(s_num + '0');
			}
			j++;
		}

		_putchar('\n');
		i++;
	}

}
