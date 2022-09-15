#include "main.h"

/**
 * more_numbers - prints numners from 0 to 14 10 times
 *
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int loop = 0;

	while (loop < 10)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1);
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
		loop++;
	}
}
