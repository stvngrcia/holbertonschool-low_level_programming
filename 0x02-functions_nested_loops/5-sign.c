#include "holberton.h"

/**
 * print_sign - 
 * Return: 
 * @n: 
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
