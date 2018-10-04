#include "holberton.h"

/**
 * times_table - prints 9 times table called by 9-main.c
 **/

void times_table(void)
{
	int a;
	int b;
	int first;
	char space;
	char comma;
	char newline;
	char ds;

	a = 0;
	b = 0;
	space = ' ';
	comma = ',';
	newline = '\n';
	ds = '$';

	while (a < 10)
	{
		first = (a * b / 10);

		if (first >= 1)
		{
			_putchar(first + '0');
		}
		else
		{
			_putchar(space);
		}
		_putchar(a * b % 10 + '0');
		b = b + 1;

		if (b <= 9)
		{
			_putchar(comma);
			_putchar(space);
		}
		else if (b == 10)
		{
			a = a + 1;
			b = 0;
			_putchar (ds);
			_putchar(newline);
		}
	}
}
