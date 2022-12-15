#include "main.h"
/**
 * print_times_table - Prints the times table of the input
 * starting with 0
 * @n: The value of the times table to be printed
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
