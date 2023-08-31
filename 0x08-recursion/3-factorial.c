#include "main.h"
/**
* factorial - calculates the factorial of a number using recursion
* @n: the number to be calculated
* Return: the factorial of the number, or -1 for error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
