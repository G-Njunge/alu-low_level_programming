#include <stdio.h>

/**
 * main - this is the check
 * Return: int
 */
int main(void)
{
	long long int sum;
	long long int first;
	int i;
	long long int second;

	second = 2;
	first = 1;
	printf("%lld, %lld\n", first, second);

	for (i = 0; i < 48; i++)
	{
		sum = first + second;
		if (i != 47)
			printf("%lld, ", sum);
		else
			printf("%lld\n", sum);

		first = second;
		second = sum;
	}
	return (0);
}
