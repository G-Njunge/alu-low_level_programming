#include "main.h"

/**
 * puts2 - prints alphabet
 *
 * @str: First integer pssed
 */
void puts2(char *str)
{
	int i;
	int o;

	o = 0;
	i = 0;
	while (str[i] != '\0')
		i++;
	while (o <= i - 1)
	{
		_putchar(str[o]);
		o += 2;
	}

	_putchar('\n');
}
