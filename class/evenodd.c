#include<stdio.h>
int main()  {
    int num;
    printf("Enter a number:");
    scanf("%d", &num);

    if (num <= 9 && num >= 0) printf("Single Digit\n");
    else printf("Multi Digit\n");
    
    if (num > 0) printf("Positive\n");
    else if (num == 0) printf("0");
    else printf("Negative\n");
    
    if (num % 2 == 0) printf("Even\n");
    else printf("Odd\n");
       
    return 0;


}