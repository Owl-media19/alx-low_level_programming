#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -main function to print alphabets in lowercase
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
		putchar('\n');
	return (0);
}
