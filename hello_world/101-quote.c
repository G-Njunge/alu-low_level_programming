#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: 1 - error detected
 */
int main(void)
{
	char *error = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, error, strlen(error));
	return 1;
}
