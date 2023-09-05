#include "main.h"
#include <stdlib.h>

/**
* _strdup - duplicates a string
* @str: The input string to be duplicate
* Return: pointer to the duplicated string, 0 otherwise
*/
char *_strdup(char *str)
{
	char *dup;
	int len = 0, i;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len ; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
}
