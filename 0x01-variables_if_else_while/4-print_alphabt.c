#include <stdio.h>
/**
 * main - prints the alphabet in lower case,
 * followed by a newline except q and e
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch < z 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar (ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
