#include<stdio.h>

int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    else
        return n * fact(n-1);
}

int main()
{   
    int num, factr;

    scanf("%d", &num);
    factr = fact(num);
    printf("%d", factr);

    return 0;
}
