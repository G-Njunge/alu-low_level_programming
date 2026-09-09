#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
        int i;
        int o;

        for (i='0'; i <= '9'; i++)
                putchar(i);
        for (o='a'; o <= 'f'; o++)
                putchar(o);
        putchar('\n');
        return (0);
}
