#include "main.h"
/**
 * *_strstr - To locate substring
 * @haystack: string parameter
 * @needle: location parameter
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	int a;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		a = 0;
		haystack++;

		if (haystack[a] == needle[a])
		{
			do {
				if (needle[a + 1] == '\0')
					return (haystack);
				a++;
			} while (haystack[a] == needle[a]);
		}
	}
	return ('\0');
}
