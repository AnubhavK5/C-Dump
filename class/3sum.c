#include<stdio.h>
int main() 
{
    int num, temp;
    int sum = 0;
    printf("Enter a 3 digit number:");
    scanf("%d", &num);
    if (num>=100 && num<=999) 
    {
        while (num>0)
        {
            temp = num%10;
            num /= 10;
            sum += temp;
        }
        printf("Sum = %d", sum);
    }
    else printf("Invalid Input");
}