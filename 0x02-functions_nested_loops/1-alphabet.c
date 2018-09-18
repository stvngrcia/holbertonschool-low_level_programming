#include "holberton.h"

/**
 * print_alphabet - prints a-z followed by whitespace
 **/

void print_alphabet(void)
{
	int letter;
	char *string;

	letter = 0;
	string = "abcdefghijklmnopqrstuvwxyz";

	while (letter <= 26)
	{
		_putchar(string[letter]);
		letter = letter + 1;
	}

	_putchar('\n');
}
