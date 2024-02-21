#include<stdio.h>
int main() 
{
    int t;
    int a[] = {45, 545,4 , 4, 76, 44, 66};
    int n = 7;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if (a[i]<a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
                
            }
        }
    }
    for (int i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }

}