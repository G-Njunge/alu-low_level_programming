#include "main.h"

/**
 * print_rev - prints alphabet
 *
 * @s: First integer pssed
 */

void print_rev(char *s)
{
	int i;
	int o;

	i = 0;
	while (s[i] != '\0')
		i++;
	for (o = i; o >= 0; o--)
		_putchar(s[o]);

	_putchar('\n');
}
