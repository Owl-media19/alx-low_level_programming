#include <stdio.h>

/**
*print_alphabet - prints a-z in lower case
*
*return (0)  successful
*/

int main(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}