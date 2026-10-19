#include "main.h"

/**
 *  _strlen - prints alphabet
 *
 * Return: int
 * @s: First integer pssed
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
