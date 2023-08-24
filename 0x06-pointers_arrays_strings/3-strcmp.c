#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: 0 if the strings are equal,
 *         a negative value if s1 is less than s2,
 *         a positive value if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
	if (s1[i] != s2[i])
	return (s1[i] - s2[i]);
	i++;
	}

	/* If one string is shorter than the other */
	if (s1[i] != '\0')
	return (s1[i]);
	else if (s2[i] != '\0')
	return (-s2[i]);

	return (0);
}
