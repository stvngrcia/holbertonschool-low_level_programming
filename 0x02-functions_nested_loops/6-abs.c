#include "holberton.h"
#include <stdio.h>

/**
 * _abs - returns the absolute value of int to 6-main.c
 * Return: returns calculated absolute value of int
 * @r: holds the value integer's caculated absolute value
 **/

int _abs(int r)
{
	if (r < 0)
	{
		r = r * -1;
	}
	return (r);
}
