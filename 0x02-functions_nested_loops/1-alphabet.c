#include <stdio.h>
#include "holberton.h"
void print_alphabet(void);
/**
 * main - Prints calls function print_alphabet
 * Return: 0
 **/

int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - prints a-z followe by whitespace
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

	putchar('\n');
}
