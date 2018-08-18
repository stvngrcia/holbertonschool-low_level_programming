#include <stdio.h>

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

    while(a <= '9')
    {
        putchar(a);
        putchar(b);
        b = b + 1;

    if(b == ':')
    {
        b = '0';
        a = a + 1;
    } 
    if(a != ':' && b != ':')
    {
        putchar(c);
        putchar(s);
    }
    }
    putchar(n);
    return 0;
}