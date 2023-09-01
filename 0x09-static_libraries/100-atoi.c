#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: s parameter
 * Return: int
 */
int _atoi(char *s)
{
	unsigned int cnv = 0, num = 0, a = 0, b = 1, c = 1, d;

	while (*(s + cnv) != '\0')
	{
		if (num > 0 && (*(s + cnv) < '0' || *(s + cnv) > '9'))
			break;

		if (*(s + cnv) == '-')
			b *= -1;

		if ((*(s + cnv) >= '0') && (*(s + cnv) <= '9'))
		{
			if (num > 0)
				c *= 10;
			num++;
		}
		cnv++;
	}
	for (d = cnv - num; d < cnv; d++)
	{
		a = a + ((*(s + d) - 48) * c);
		c /= 10;
	}
	return (a * b);
}
