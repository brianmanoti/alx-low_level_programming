#include "main.h"
/**
 * print_alphabet -> prints the alphabet in lower case
 * followed by a newline
 */

void print_alphabet(void)
{
	char j;

	for (j = 'a'; j <= 'z'; j++)
	{
		_putchar(j);
	}
	_putchar('\n');
}
