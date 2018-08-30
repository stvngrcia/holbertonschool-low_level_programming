#include <stdio.h>

/**
 * main - prints 0-1 following each number with comma and space
 * Return: 0
 */

int main(void)
{
int a;
int c;
int s;
int n;

a = '0';
c = ',';
s = ' ';
n = '\n';

while (a <= '9')
{
	putchar(a);
	a = a + 1;

	if (a <= '9')
	{
		putchar(c);
		putchar(s);
	}
}

putchar(n);
return (0);
}
