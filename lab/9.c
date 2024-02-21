#include<stdio.h>
int main()
{
    int c = 0, num;
    printf("Enter a number : ");
    scanf("%d", &num);
    int num1 = num;
    while(num1<100000)
    {
        num1*=2;
        c++;
    }
    printf("The number %d has to be doubled %d times to cross the value 100000", num, c);
    return 0;
}