#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	if (n == 0)
	{
		printf("\n");
		return;
	}

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		if (separator == NULL)
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d", num);
		}
		else
		{
			if (i == n - 1)
				printf("%d\n", num);
			else
				printf("%d%s", num, separator);
		}
	}
	va_end(args);
}
