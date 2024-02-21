#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
 
    for(int i = 1; i<=n; i++)
    {
        // for(int k = 1; k<=10; k++)
        // {
        //     printf("%d, ", k);
        // }
        // for(h = 11; )
        int orgnum = i;
        int k = i;
        int rev = 0;
        while(k>0)
        {
            int rem = k%10;
            rev = rev*10 + rem;
            k /= 10;
        }
        if (rev == orgnum) printf("%d:%d, ", i,orgnum);
    }
}