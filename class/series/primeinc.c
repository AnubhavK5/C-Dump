#include<stdio.h>
int main()
{   
    int k=2;
    int num = 2;
    int n;
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {   
             while (k <= num/2) {
            if (num % k == 0) break;
            k++;
        }
        if (k > num/2) printf("%d ", num);
            
        }
    
        printf("\n");
    }
}