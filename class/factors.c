#include<stdio.h>
int main() 
{   
    int count = 1;
    int num;
    scanf("%d", &num);
    while (num>=count)
    {
        if (num%count==0)
        {
            printf("%d,", count);
             ++count;
        }
        
        else ++count;
        

    
    }
}