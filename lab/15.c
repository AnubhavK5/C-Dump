#include<stdio.h>
int main()
{   
    int n, c=1;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {
            if (c%2==0)   c=0;
            printf("%d ", c);
            c++;
        }
        printf("\n");
    }
}