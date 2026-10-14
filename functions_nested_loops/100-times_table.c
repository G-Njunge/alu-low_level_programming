#include "main.h"

/**
 * print_padded - this is the check
 * Return: void
 * @n: First integer passed
 * @width: second integer passed
 */
void print_padded(int n, int width)
{
	int digits = 1;
	int t = n;
	int div = 1;
	int i;

	while (t >= 10)
	{
		t = t / 10;
		digits++;
	}
	for (i = digits; i < width; i++)
		_putchar(' ');
	for (i = 1; i < digits; i++)
		div = div * 10;
	while (div > 0)
	{
		_putchar((n / div) % 10 + '0');
		div = div / 10;
	}
}

/**
 * print_times_table - this is the check
 * Return: void
 * @n: First integer passed
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			if (j == 0)
			{
				print_padded(0, 1);
				continue;
			}
			_putchar(',');
			_putchar(' ');
			print_padded(i * j, 3);
		}
		_putchar('\n');
	}
}
