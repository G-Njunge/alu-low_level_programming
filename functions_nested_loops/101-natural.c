#include <stdio.h>

/**
 * main - this is the check
 * Return: int
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 9)
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
