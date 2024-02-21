#include<stdio.h>
int main()
{   
    float P,r,T,Total;
    printf("Enter Principle amount:");
    scanf("%f", &P);
    printf("Enter the rate of interest:");
    scanf("%f", &r);    
    printf("Enter the duration of interest in years:");
    scanf("%f", &T);
    Total = (P*r*T)/100.0;
    printf("Your simple interest is:%f", Total);    
    return 0;
}
