#include "holberton.h"

/**
 * print_last_digit - calculates the last digit of number provided in 7-main.c
 * @r: holds the value of the last digit
 * Return: returns calculated last digit of number
 **/

int print_last_digit(int r)
{
	
	r = r % 10;
	if (r < 0)
	{
		r = r * -1;
	}
	_putchar('0' + r);

	return (r);
}
