#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *Return: void
 */

void times_table(void)
{
	int row, col, pro;

	for (row = 0; row < 10; row++)
	{
		for (col = 0; col < 10; col++)
		{
			pro = row * col;
			if (col == 0)
				_putchar(pro + '0');

			if (pro < 10 && col != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(pro + '0');
			}
			else if (pro >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((pro / 10) + '0');
				_putchar((pro % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
