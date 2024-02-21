#include<stdio.h>  
  
void pfactors_rec(int, int);  
void pfactors(int);  
  
int main()  
{  
    int num;  
  
    printf("Enter a positive integer number\n");  
    scanf("%d", &num);  
  
    printf("\nPrime Factors of %d without using recursion\n", num);  
    pfactors(num);  
  
    printf("\nPrime Factors of %d using recursion\n", num);  
    pfactors_rec(num, 2);  
  
    return 0;  
}  
  
void pfactors_rec(int num, int count)  
{  
    if(num < 1)  
        return;  
    else if(num % count == 0)  
    {  
      printf("%d\n", count);  
      pfactors_rec(num / count, count);  
    }  
    else  
    {  
      pfactors_rec(num, count+1);  
    }  
}  
  
void pfactors(int num)  
{  
    int count;  
  
    for(count = 2; (num > 1); count++)  
    {  
        while(num % count == 0)  
        {  
            printf("%d\n", count);  
            num = num / count;  
        }  
    }  
    printf("\n");  
}  
