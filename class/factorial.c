#include<stdio.h>
int main() 
{
    int num;
    
    scanf("%d", &num);
    int fact = num;
    while (num>1)
    {
        // fact = num;
        fact *= (num-1);
        // fact
        num-=1;
    }
    // fact = fact*num;

    printf("%d", fact);


}