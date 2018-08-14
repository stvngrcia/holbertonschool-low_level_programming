#include <stdio.h>

int main()
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

    return 0;
}