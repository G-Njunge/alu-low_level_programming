#include "main.h"
#include <stdio.h>

/**
 * check - this is the check
 * Return: void
 * @i: First integer passed
 */
void check(int i)
{
	if (i == 98)
		printf("%d\n", i);
	else
		printf("%d, ", i);
}

/**
 * print_to_98 - prints numbers to 98
 * Return: void
 * @n: First integer pssed
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
			check(i);
	}
	else
	{
		for (i = n; i <= 98; i++)
			check(i);
	}
}
