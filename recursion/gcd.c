#include<stdio.h>

int GCD(int a, int b, int c)
{
    if (c==1)  return 1;
    if((a%c==0) && (b%c==0))
        {
            return c;
        }
    else return GCD(a, b, c-1);
}

int main()
{
    int a, b, c, x;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    c = a<b?(a):(b);
    x = GCD(a, b, c);
    printf("GCD Of %d and %d = %d",a,b, x);
}