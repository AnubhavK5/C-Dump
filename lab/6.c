#include<stdio.h>
int main() 
{
    int Y;
    printf("Enter the year = ");
    scanf("%d",&Y);
    if ((Y % 4 == 0) && ((Y % 100 != 0) || (Y % 400 == 0)))
    	printf("%d is a Leap Year", Y);
 
    else
        printf("%d is not a Leap Year", Y);   
    
    return 0;
}


