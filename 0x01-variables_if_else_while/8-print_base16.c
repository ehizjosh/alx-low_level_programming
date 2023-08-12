#include <stdio.h>

/**
 * main - Prints a hexadecimal string
 *
 * Return: Always (success)
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}

	for (c = 'a'; c <= 'g'; c++)
	{
		putchar(c);
	}
	putchar(c);

	return (0);
}
