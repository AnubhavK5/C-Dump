#include<stdio.h>
int main()
{
    int c = 0, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(int i = 2; i<=num/2; i++)
    {
        if (num%i==0) {
            printf("%d is not a prime number.", num);
            return 0;
        } 
        
        
    }
     printf("%d is a prime number.", num);
}