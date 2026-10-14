#include "main.h"

/**
 * print_last_digit - prints alphabet
 *
 * Return: int
 * @n: First integer pssed
 */

int print_last_digit(int n)
{
	int last_no;
	
	last_no = (n % 10);
	if (last_no < 0)
		last_no = -last_no;
	_putchar('0' + last_no);
	return (last_no);
}

