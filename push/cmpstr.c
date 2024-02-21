#include <stdio.h>
#include<string.h>

 
int cmp(char a[], char b[])
{
    int i, j = 0, d;
    int len_a = strlen(a);
    int len_b = strlen(b);
    if(len_a >len_b)
        return 1;
    else if(len_a<len_b)
        return -1;
    
    for(i = 0;  b[i]!='\0'; i++)
    {
        if(a[i] != b[i])
            return d = a[i] - b[i];
    }
    return 0;
}

int main()
{
    char a[100] = "AnuBhav";
    char b[100] = "AnuBHaV";
    int d = cmp(a, b);
    if (d>0) d =1;
    else d = -1;
    printf("%d\n", strcmp(a,b));
    printf("%d\n", d);
    return 0;
    
}