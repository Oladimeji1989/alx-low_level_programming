#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - return pointer to a newly allocated space in memory
 * @str: string parameter
 * Return: char
 */
char *_strdup(char *str)
{
	unsigned int c, d;
	char *dp;

	if (str == NULL)
	{
		return (NULL);
	}

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}

	dp = (char *)malloc(sizeof(char) * (c + 1));

	if (dp == NULL)
	{
		return (NULL);
	}

	for (d = 0; d <= c; d++)
	{
		dp[d] = str[d];
	}
	return (dp);
}
