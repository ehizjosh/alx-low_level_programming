#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenate all arguments with newlines
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 *
 * Return: A pointer to the concatenated string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	for (j = 0; av[i][j]; j++)
	total_len++;

	/* Add space for newline characters */
	total_len += ac - 1;

	/* Allocate memory for the concatenated string */
	str = malloc(total_len + 1);

	if (str == NULL)
	return (NULL);

	/* Copy arguments into the concatenated string with newlines */
	len = 0;
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
	str[len++] = av[i][j];
	}

	if (i < ac - 1)
	{
	str[len++] = '\n';
	}
	}

	/* Null-terminate the concatenated string */
	str[len] = '\0';

	return (str);
}

int main(void)
{
	char *s;


	char *arguments[] = {"Hello", "World", "Concatenate", "Me"};

	char *result = argstostr(4, arguments);

	if (result != NULL)
	{
	printf("Concatenated string:\n%s\n", result);
	free(result);
	}
	else
	{
	printf("Failed to allocate memory.\n");
	}

	return (0);
}
