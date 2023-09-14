#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - function that prints anything
 * @format: formatting parameters
 * @...: variable parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *str, *sept = "";

	va_list lst;

	va_start(lst, format);
	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", sept, va_arg(lst, int));
					break;
				case 'i':
					printf("%s%d", sept, va_arg(lst, int));
					break;
				case 'f':
					printf("%s%f", sept, va_arg(lst, double));
					break;
				case 's':
					str = va_arg(lst, char*);
					if (!str)
						str = "(nil)";
					printf("%s%s", sept, str);
					break;
				default:
					a++;
					continue;
			}
			sept = ",";
			a++;
		}
	}
	printf("\n");
	va_end(lst);
}
