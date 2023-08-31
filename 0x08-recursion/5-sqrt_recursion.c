#include "main.h"
/**
* _pow_recursion - calculates the power of x raised to power of y
* @x: the base value
* @y: the exponent value
* Return: The result of x raised to the power of y, or -1.
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
/**
* sqrt_helper - Recursive helper function to find the square root
* @n: The number for which to find the square root
* @guess: The current guess for the square root
* Return: The natural square root of n, or -1
*/
int sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}
	return (sqrt_helper(n, guess + 1));
}
