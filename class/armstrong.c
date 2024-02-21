#include<stdio.h>
#include<math.h>
int main() 
{
    int num, temp;
    int sum = 0;
    printf("Enter a 3 digit number:");
    scanf("%d", &num);
    int num1 =num;
    if (num>=100 && num<=999) 
    {
        while(num>0)
        {
            temp= num % 10;
            sum += pow(temp,3);
            num /=10;
            // --num;
        }
        // printf("%d", num1);
        
        if (num1 == sum) {
            printf("Armstrong number\n");
        }
        else printf("again fcuk off\n");
        // printf("%d", sum);
    }
    else printf("Fuck off");
}