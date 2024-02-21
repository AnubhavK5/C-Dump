#include<stdio.h>
int sumterms(int n)
{
    int c=1, sum=0;
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
        sum+=j;
        printf("%d + ", j);
        }
    }
    return sum;
}

float oddDiv(int n)
{
    float sum=0.0, term, sign=1; 
    for(int i=3; i<=n; i+=2)
    {
        term = 1.0/i;
        sum+= term*sign;
        sign *=-1;
    }
    return sum;
}






int main()
{
    int num, y, z;
    float x;
    printf("Enter no of terms: ");
    scanf("%d", &num);
    y = sumterms(num);
    printf("0 = %d", y);
    // x = oddDiv(num);
    // printf("= %f", x);
    return 0;

}