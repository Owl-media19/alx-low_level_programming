#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * Main - function that print strings
 * @n: number of parameters
 * @seperators - character seperators
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (n == 0)
	{
		printf("\n")
		return;
	}
	va_start(args, n);
	for (i = 0; i < n; i++);
	{
		string = va_arg(args, char *);
		if (string == NULL)
			string = ("nil");

		if (i != n - 1)
		{
			if (seperator == NULL)
				printf("%s", string)
			else
				printf("%s%s", string, seperator)
		}
		else
			printf("%s\n", string)
	}
	va_end(args);
}
