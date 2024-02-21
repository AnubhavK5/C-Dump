#include<stdio.h>
#include<math.h>
int CubeSeries(int ,int , int );
int main()
{
    int n;
    scanf("%d", &n);
    int sum = CubeSeries(1, n, 0);
    printf("%d", sum);
    return 0;
}

int CubeSeries(int i,int n, int sum)
{
    if (i==n+1)   return sum;
    int x = pow(i, 3);
    return CubeSeries(i+1, n, sum+=x);
}