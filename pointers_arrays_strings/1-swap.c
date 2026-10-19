#include "main.h"

/**
 * swap_int - prints alphabet
 *
 * @a: Secon in
 * @b: First integer pssed
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
