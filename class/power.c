#include<stdio.h>
int main() 
{
    int num, new, p, count=1;
    //int sum = 0;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter power:");
    scanf("%d", &p);
    new = num;
    while (p>count)
    {
        new *= num;
        ++count;
    }
    printf("%d", new);
    return 0;

}
