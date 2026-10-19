#include "main.h"

/**
 * puts_half - prints alphabet
 *
 * @str: First integer pssed
 */
void puts_half(char *str)
{
	int i;
	int n;

	i = 0;
	while (str[i] != '\0')
		i++;
	n = i / 2;
	while (n > 0)
	{
		_putchar(str[i - n]);
		n--;
	}
	_putchar('\n');
}
