#include <stdio.h>

int main()
{
    int n, smallest, greatest;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int N[n];
    for(int i = 0; i < n; i++)
    {
        printf("Enter num %d : ", i+1);
        scanf("%d", &N[i]);
    }  
    smallest = N[0];
    greatest = N[0];
    for(int i = 0; i < n; i++)
    {
        if (N[i]<smallest)  smallest = N[i]; 
        if (N[i]>greatest)  greatest = N[i];
    }
    
    printf("Smallest = %d\n", smallest);
    printf("Greatest = %d", greatest);
    return 0;
}
