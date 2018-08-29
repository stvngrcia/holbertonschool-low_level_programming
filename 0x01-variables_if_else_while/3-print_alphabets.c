#include <stdio.h>

/**
 * main - This prints the alphabet in Upper and Lower
 * Return: 0
 */

int main(void)
{
char a;
char b;
char c;

a = 'a';
b = 'A';
c = '\n';

while (a <= 'z')
{
	putchar(a);
	a = a + 1;
}

while (b <= 'Z')
{
	putchar(b);
	b = b + 1;
}

putchar(c);

return (0);
}
