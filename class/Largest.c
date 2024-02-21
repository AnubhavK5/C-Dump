#include<stdio.h>
int main()  {
    int a,b,c,large;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a, &b,&c);
    // if (a>b) large = a;
    // else large = b;
    // if (c>b) large = c;
    large = a;
    if (b>large) large = b;
    if (large<c) large = c;
    printf("%d", large);
    return 0;

}

