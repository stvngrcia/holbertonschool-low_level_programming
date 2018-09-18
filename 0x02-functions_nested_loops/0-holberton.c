#include <stdio.h>
#include "holberton.h"

/**
 * main - prints "Holberton" followed by a new line
 * Return: 0
**/

int main(void)
{
char *string;
int l;

string = "Holberton";
l = 0;

while (l <= 8)
{
	_putchar(string[l]);
	l = l + 1;
}
_putchar('\n');

return (0);
}
