#include "main.h"

/**
 * jack_bauer - prints alphabet
 *
 * Return: void
 */

void jack_bauer(void)
{
	int tenth_hour;
	int hour;
	int tenth_min;
	int min;

	for (tenth_hour = 0; tenth_hour <= 2; tenth_hour++)
	{
		for (hour = 0; hour <= 9; hour++)
		{
			for (tenth_min = 0; tenth_min <= 5; tenth_min++)
			{
				for (min = 0; min <= 9; min++)
				{
					if (tenth_hour == 2 && hour == 4)
						return;
					_putchar('0' + tenth_hour);
					_putchar('0' + hour);
					_putchar(':');
					_putchar('0' + tenth_min);
					_putchar('0' + min);
					_putchar('\n');
				}
			}
		}
	}
}
