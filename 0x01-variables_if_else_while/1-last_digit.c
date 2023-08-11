#include <stdib.h>
#include <time.h>
#include <stdio.h>

/**
 * main Determines if a number is positive, negative or zero.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
        int n:

        srand(time(0));
        n = rand() - RAND_MAX / 2;
	
	if ((n % 10) > 5)
	{
		printf("last digit of %d is %d and its greater than 5\n", n, n % 10);
	}
	else if ((n % 10) < 6 && (n % 10) != 0)
	{
		printf("last digit of %d is %d and is less than 6 and not n, n % 10)
