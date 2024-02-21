#include <stdio.h>
int swap(int *a, int *b);
 
int main()
{
   int a = 6, b = 7;
   printf("%d&%d\n", a, b);
   swap(&a, &b);
   printf("%d&%d", a, b);
   return 0;
}

int swap(int *a, int *b)
{
   int temp = *a;
   *a = *b;
   *b = temp;
}