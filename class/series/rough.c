#include<stdio.h>
int main()  {
    int n , c=1, l=0;
    scanf("%d", &n);
    for(int i=0; i<=n; i++)  {
        int d = c; // use a different variable for the inner loop
        for(int j =1;j<=i; j++)  
        {
            if (l%2==0)  
            {
                int m =0;
                if(m==i)  // use an if statement instead of a while loop
                {
                    if (d==10)  d=0; // use a conditional statement instead of modulo
                    printf("%d",d);
                    d--;
                    m++;
                }
                if (d==10)  d=0;
               
                }
            d++; // increment d before printing
            int temp = d; // use a temporary variable to store the incremented value
            if (temp==10)  temp=0; // use a conditional statement instead of modulo
            printf("%d", temp); // print the temporary variable
            }
        printf("\n");
        l++;
        c = d; // update c to the value of d
        }
 }
