#include<stdio.h>
int main() 
{
    char c;
    scanf("%c", &c);
    if ((c >= 65 && c<= 90) || (c >= 97 && c<= 122))
    {
    if ((c == 'a') || (c == 'A') || (c=='e') || (c=='E') || (c=='i') || (c=='I') || (c=='O') || (c=='o') || (c=='u') || (c=='U'))
    printf("vowel");
    else printf("consonant");
    }

    else printf("invalid input");
    return 0;

    
}
