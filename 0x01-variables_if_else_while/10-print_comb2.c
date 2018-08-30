#include <stdio.h>

/**
 * main - prints 00-99 followed by comma and space except for 99
 * Return: 0
 */

int main(void)
{
int a;
int b;
int c;
int s;
int n;

a = '0';
b = '0';
c = ',';
s = ' ';
n = '\n';

while (a <= '9')
{
	putchar(a);
	putchar(b);
	b = b + 1;

	if (b == ':')
	{
		b = '0';
		a = a + 1;
	}
	if (a != ':' && b != ':')
	{
		putchar(c);
		putchar(s);
	}
}

putchar(n);
return (0);
}
