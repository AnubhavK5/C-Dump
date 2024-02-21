#include<stdio.h>
int main()  
{
    char c, d;
    scanf("%c", &c);
    if (c >= 65 && c<= 90) {
        d = c + 32;
        printf("%c = %c", c,d);
    }
    else if (c >= 97 && c<= 122) 
    {
        d = c - 32;
        printf("%c = %c", c,d);
    }
    else printf("Invalid Input");
}
    