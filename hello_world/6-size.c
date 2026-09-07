#include <stdio.h>

/* main code entry point*/
int main(void)
{
	/* using zu as the sizeof data type*/
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	/*returning 0 to show a sucessful program run */
	return (0);
}

