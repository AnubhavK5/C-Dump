// print table of a number upto n
#include<stdio.h>
int main()
{
    long long int num,n;
    long long int count = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    printf("Enter no of multiples:");
    scanf("%d", &n);
    while (n>=count)
    {
        printf("%d X %d = %d \n", num, count, (num*count));
        count++;

    } 
    return 0;
}
