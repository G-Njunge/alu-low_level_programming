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
	int j;

	for(i = '0';i <= '7'; i++)
	{
		for(o = i+1; o <= '8'; o++)
		{
			for (j = o+1; j <= '9'; j++)
			{	
				putchar(i);
				putchar(o);
				putchar(j);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
