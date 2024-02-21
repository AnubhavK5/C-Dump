#include<stdio.h>
int main()
{
    int a[] = {1, 3, 5, 7, 9};
    int b[] = {2, 4, 6, 8, 10};
    int sorted[100];
    int n = sizeof(a)/sizeof(int);
    // printf("%d", n);
    for(int i = 0; i<=n; i++)
    {
    //    int c = a[i]<b[i]?(a[i]):(b[i]);
    //    int d = a[i]>b[i]?(a[i]):(b[i]);
    //    sorted[i] = c;
    //    sorted[i+1] = d;
    if(a[i]<b[i])  sorted[i] = a[i];
    else  sorted[i] 

       
    }
     for (int i=0; i<2*n; i++)
    {
        printf("%d\n", sorted[i]);
    }
}
