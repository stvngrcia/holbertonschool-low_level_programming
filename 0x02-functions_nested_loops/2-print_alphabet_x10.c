#include "holberton.h"

/**
 * print_alphabet_x10 - prints a-z x10 followed by whitespace
 **/

void print_alphabet_x10(void)
{
	char alpha;
	int times;

	alpha = 'a';
	times = 0;

	while (times <= 10)
	{
		_putchar(alpha);
		alpha = alpha + 1;

		if (alpha == '{') /* this is the value stored after z*/
		{
			alpha = 'a';
			times = times + 1;
			_putchar('\n');
		}
	}
}
