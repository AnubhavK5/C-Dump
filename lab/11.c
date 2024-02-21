#include<stdio.h>
int main()
{
    int c = 1, n, num, sum = 0.0;
    float avg;
    printf("Enter the range of numbers : ");
    scanf("%d", &n);
    for(int c=1; c<=n; c++)
    {
        printf("Enter number %d: ",c);
        scanf("%d", &num);
        sum += num;
    }
    avg = sum/n;
    printf("sum = %d\naverage = %.2f\n", sum , avg);
    return 0;
}