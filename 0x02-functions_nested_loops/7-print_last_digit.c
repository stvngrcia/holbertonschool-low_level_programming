#include "holberton.h"

/**
 * print_last_digit - calculates the last digit of number provided in 7-main.c
 * Return: returns calculated last digit of number
 * @r: holds the value of the last digit
 **/

int print_last_digit(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	r = r % 10;
	_putchar(48 + r);
	return (r);
}
