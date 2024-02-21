#include <stdio.h>
void sumavg(int a, int b,int *sum,float *avg);
int main()
{
    int sum; 
    float avg;
    int a = 4, b = 5;
    sumavg(a, b, &sum, &avg);
    printf("%d\n%f", sum, avg);
    return 0;
}

void sumavg(int a, int b,int *sum,float *avg)
{
    *sum = a + b;
    *avg = (float)*sum/2;
}