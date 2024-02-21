#include<stdio.h>
int main()
{
    int smallest, num;
  
    for(int i =1; i<=5; i++)
    {
        printf("Enter %d number : ", i);
        scanf("%d", &num);
        if (smallest>num)   smallest = num;

    }
    printf("smallest = %d", smallest);
    return 0;
}
