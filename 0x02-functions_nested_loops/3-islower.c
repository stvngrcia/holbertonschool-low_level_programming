#include "holberton.h"

/**
 * _islower - Returns 1 if int c is lowercase, returns 0 otherwise
 * Return: 0 if not lowercase, 1 if yes
 * @c: holds value of what is assigned in 3-main.c
 **/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
