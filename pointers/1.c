// #include<stdio.h>
// int main()
// {
//     int a = 6, *j;
//     j = &a;
//     printf("%d\n",a);
//     printf("%d\n",*j);
//     printf("%u\n",&a);
//     printf("%u\n",j);
//     printf("%u\n",&j);
//     printf("%u\n",*(&j));
//     // printf("%d\n",a);
//     // printf("%d\n",a);
//     // printf("%d\n",a);
// }

#include <stdio.h>

void add(int a)
{
    printf("%u", &a);

}
 
int main()
{
    int  a = 4;
    printf("%u\n", &a);
    add(a);
 
    return 0;
}