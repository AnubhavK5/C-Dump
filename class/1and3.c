#include<stdio.h>

int lastdigit(int num)
{
    int digitlast = num % 10;
    return digitlast;
}

int firstdigit(int num)
{
    int temp = num;
    while (temp >= 10)
    {
        temp /= 10;
    }
    return temp;
}

int main() 
{   
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);
    printf("%d", firstdigit(num) + lastdigit(num));
    
    return 0;
}  
