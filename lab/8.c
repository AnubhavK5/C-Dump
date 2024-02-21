#include<stdio.h>
int main()
{
    int x;
    printf("Enter value of x = ");
    scanf("%d",&x);
    if (x>=0 && x<=10)
        printf("F(x) = %d\n",((x*x)+2));
    
    else if (x>=11 && x<=20)
        printf("F(x) = %d\n",((x*x)+(2*x)));
    
    else if (x>=21 && x<=30)
        printf("F(x) = %d\n",((x*x*x)+(2*x*x)));
    
    else if (x>30)
        printf("F(x) = 0");
    
    else
        printf("WRONG VALUE FOR x");   
    return 0;
}

