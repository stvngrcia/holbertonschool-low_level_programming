#include "holberton.h"

/**
 * _isalpha - Returns 1 if int c in main is letter, returns 0 otherwise
 * Return: 1 if letter, 0 if not
 * @c: holds value of what is assigned in 4-main.c
 **/

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
