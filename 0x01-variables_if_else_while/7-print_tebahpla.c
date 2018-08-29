#include <stdio.h>

/**
 * main - print lowercase alphabet once in reverse
 * Return: 0
 */

int main(void)
{
char z;
char n;

z = 'z';
n = '\n';

while (z >= 'a')
{
	putchar(z);
	z = z - 1;
}

putchar(n);
return (0);
}
