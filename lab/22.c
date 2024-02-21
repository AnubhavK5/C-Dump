#include <stdio.h>

int main()
{
    int n,k;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter a number k");
    scanf("%d", &k);
    int N[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter num %d : ", i+1);
        scanf("%d", &N[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if (N[i]<k)  printf("k is greater than N[%d] = %d.\n" ,i, N[i]); 
        if (N[i]>k)  printf("k is smaller than N[%d] = %d.\n" ,i, N[i]); 
        if (N[i]==k) printf("k is equal to N[%d] = %d.\n",i, N[i]); 
    }
    return 0;
}