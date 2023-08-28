#include "main.h"
/**
* _strchr - locates the first occurence of a character in a string
* @s: pointer to the string
* @c: character to be located
* Return: pointer to the first occurrence , otherwise 0
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (0);
}
