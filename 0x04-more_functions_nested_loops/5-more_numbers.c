#include "main.h"

/**
 * more_numbers - print more numbers within 0 and 14
 * 10 times
 * Return: no return
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + 48);
			-putchar ((j % 10) + 48);
		}
		_putchar('\n');
	}
}
