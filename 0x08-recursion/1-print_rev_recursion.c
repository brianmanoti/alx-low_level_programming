#include "main.h"
/**
 * _print_rev_recursion - prints recursion in reverse
 * @s: The string to be printed.
 */
void _print_rev_recursion(char *s)
{
	_putchar(*s);
	_print_rev_recursion(s + 1);
}
