#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int o;

	for(i = '0';i <= '8'; i++)
	{
		for(o = i+1; o <= '9'; o++)
		{
			putchar(i);
			putchar(o);
			if (i != '8')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}	
