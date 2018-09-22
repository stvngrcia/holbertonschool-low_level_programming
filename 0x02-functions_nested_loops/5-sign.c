#include "holberton.h"

/**
 * print_sign - prints the symbol and assigns return value
 * Return: 1 if > 0, 0 if 0, or -1 if < 0
 * @n: assigns return value
 **/

int print_sign(int n)
{
	char symbol;

	if (n > 0)
	{
		symbol = '+';
		_putchar(symbol);
		return (1);
	}
	else if (n == 0)
	{
		symbol = '0';
		_putchar(symbol);
		return (0);
	}
	else
	{
		symbol = '-';
		_putchar(symbol);
		return (-1);
	}
}
