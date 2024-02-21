#include<stdio.h>
int main()  {
    int n , c=1, l=0;
    scanf("%d", &n);
    for(int i=0; i<=n; i++)  {
        for(int j =1;j<=i; j++)  
        {
            if (l%2==0)  
            {
                int m =0;
                while(m<=i)  
                {
                    if (c==10)  c=0;
                    printf("%d",c);
                    c--;
                    m++;
                }
                if (c==10)  c=0;
               
                }
            printf("%d", c);
            c++;

            }
        printf("\n");
        l++;
        }
 }