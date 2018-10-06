#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - provides function that prints all natural numbers from n - 98
 * @n: holds value of number provided by 11-main
 **/

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 99)
		{
			printf("%d", n);
			n = n + 1;

			if (n < 99)
				printf(", ");

			else
				printf("\n");
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d", n);
			n = n - 1;

			if (n > 97)
				printf(", ");

			else
				printf("\n");
		}
	}
}
