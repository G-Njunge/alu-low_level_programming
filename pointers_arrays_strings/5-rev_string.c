#include "main.h"
/**
 * rev_string - prints alphabet
 *
 * @s: First integer pssed
 */

void rev_string(char *s)
{
	int i;
	int o;
	int j;
	char t[50];

	i = 0;
	while (s[i] != '\0')
		i++;


	j = 0;
	for (o = i - 1; o >= 0; o--)
	{
		t[j] = s[o];
		j++;
	}
	for (o = 0; o < i; o++)
		s[o] = t[o];
}
