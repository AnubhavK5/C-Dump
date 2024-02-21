#include<stdio.h>


// int fibonacci(int num) {
//     int a=0, b=1,c;
//     for(int i=0; i<=num; i++)
//     {
//         printf("%d\t", a);
//         c = a + b;
//         a = b;
//         b = c;
//     }
// }

int main()
{   
    int a=0, b=1,c;
    int n,k=0;
    scanf("%d", &n);
    for(int i=0; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
        {   
            printf("%d\t", a);
            c = a + b;
            a = b;
            b = c;
            
            
        }
    
        printf("\n");
    }
}