#include<stdio.h>
int HCF(int a, int b, int c)
{
    if (a%c == 0 || b%c == 0)
        return c;
    else return HCF(a, b, c-1);
}

int main()
{
    int a,b,c,x;
    scanf("%d", &a);
    scanf("%d", &b);
    c = a < b? (a):(b);
    x = HCF(a, b, c);
    printf("%d", x);
}