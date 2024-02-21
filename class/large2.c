#include<stdio.h>
int main()  {
    int a,b,c,large;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a, &b,&c);
    if (a>c && a>b) printf("a is greatest");
    else if (b>c && b>a) printf("b is greatest");
    else if (c>a && c>b) printf("c is greatest");
    
}


