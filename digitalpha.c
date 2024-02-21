#include <stdio.h>
#include <math.h>
int main()
{
    int digit, num, rev = 0, n = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    int num1 = num;
    int digits = log10(num);
    digits++;
    printf("%d", digits);
    while(num1>0)
    {
        int rem = num1%10;
        rev = rev*10 + rem;
        num1/=10;
    }
    while(rev>0)
    {
        digit = rev%10;
        switch(digit)
        {
            case 1 : printf("one\t");
                    n++;
                    break;
            case 2 : printf("two\t");
                    n++;
                    break;
            case 3 : printf("three\t");
                    n++;
                    break;
            case 4 : printf("four\t");
                    n++;
                    break;
            case 5 : printf("five\t");
                    n++;
                    break;
            case 6 : printf("six\t");
                    n++;
                    break;
            case 7 : printf("seven\t");
                    n++;
                    break;
            case 8 : printf("eight\t");
                    n++;
                    break;
            case 9 : printf("nine\t");
                    n++;
                    break;
            case 0 : printf("zero\t");
                    n++;
                    break;
            
        }
        
        rev/=10;
        
    }
    while(n > digits)
    {
        printf("zero\t");
        n++;

    }
    
}