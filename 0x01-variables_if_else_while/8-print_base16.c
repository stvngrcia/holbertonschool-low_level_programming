#include <stdio.h>

/**
 * main - prints 0-9 then a-f
 * Return: 0
 */

int main(void)
{
char a;
char l;
char n;

a = '0';
l = 'a';
n = '\n';

while (a <= '9')
{
	putchar(a);
	a = a + 1;
}

while (l <= 'f')
{
	putchar(l);
	l = l + 1;
}

putchar(n);
return (0);
}
