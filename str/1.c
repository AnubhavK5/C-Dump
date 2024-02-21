#include <stdio.h>
 
int main()
{
    char name[] = "Anubhav Kumar";
    int n = sizeof(name)/sizeof(char);
    // printf("%d", n);
    for(int i = 0; i<n; i++)
    {
        printf("%c", name[i]);
    }
    int i = 0;
    // while(name[i]!='\0')
    while(i<10)
    {
        printf("%c", name[i]);
        i++;
    }
    char *ptr = name;
    while(*ptr!='\0')
    {
        printf("%c", *ptr);
        ptr++;
        
    }
    return 0;
}