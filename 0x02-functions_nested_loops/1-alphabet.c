#include "main.h"
/**
 * main - prints the alphabet in lower case
 * followed by a newline
 * Return: 0 Always
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
