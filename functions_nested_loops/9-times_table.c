#include "main.h"

/**
 * print_number - prints a non-negative integer using _putchar
 * @n: the number to print
 */
void print_number(int n)
{
	int arr[5];
	int k = 0;
	int l;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > 0)
	{
		arr[k] = n % 10;
		n = n / 10;
		k++;
	}
	for (l = k - 1; l >= 0; l--)
		_putchar('0' + arr[l]);
}

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod < 10)
					_putchar(' ');
			}
			print_number(prod);
		}
		_putchar('\n');
	}
}
