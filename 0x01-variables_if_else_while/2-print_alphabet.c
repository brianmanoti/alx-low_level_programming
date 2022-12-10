#include <stdio.h>
/**
 * main - prints alphabets in lower case
 * followed by newline
 * Return: 0 Always
 *
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
