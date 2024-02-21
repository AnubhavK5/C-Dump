#include<stdio.h>
float fact(int n)
{
    float f=1.0;
    while(n>0)
    {
        f = f*n;
        n--;
    }
    return f;
}


int main()
{
    float x, sum=0;
    int num;
    printf("Enter no of terms: ");
    scanf("%d", &num);
    for(int i = 1; i<=num; i++)
    {
       x = (double)i/fact(i);
       sum+=x;
    }
    printf("= %f", sum);
    return 0;

}