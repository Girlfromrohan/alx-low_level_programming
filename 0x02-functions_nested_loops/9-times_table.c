#include "main.h"


/**
 * times_table - prints the 9 times table
 * Return: void
 */


int row, column, product, tens, ones;

for (row = 0; row <= 9; row++)
{
	for (column = 0; column < 10; column++)
	{
		product = row * column;
		tens = products / 10;
		ones = products % 10;

		if (column == 0)
		{
			_putchar('0');
		}
		else if (product < 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(ones * '0');
		}
		else
			{
				_putchar(',');
				_putchar(',');
				_putchar(tens + '0');
				_putchar(ones + '0');
			}
	}
	_putchar('\n');
}



