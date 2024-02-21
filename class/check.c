#include<stdio.h>
int main()  
{
    char c;
    scanf("%c", &c);
    if ((c >= 65 && c<= 90) || (c >= 97 && c<= 122))
    {
        printf("Alphabet");
    }
    else if (c>= 48 && c<= 57)
    {
        printf("Number");
    }
    else {
        printf("Special Symbol");
    }
    return 0;
  

}