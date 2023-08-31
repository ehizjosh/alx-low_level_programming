#include "main.h"
int sqrt_helper(int n, int guess);
/**
* _sqrt_recursion - calculates the natural square root of a number
* @n: The number for which to find the square root
* Return: The natural square root of n, or -1
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_helper(n, 1));
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
