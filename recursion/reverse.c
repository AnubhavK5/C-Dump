#include<stdio.h>
int reverse(int n, int rev)
{   
    int rem;
    if (n<=0)  return rev;
    rem = n%10;
    return reverse(n/10, rev*10 + rem);

    
}

int main()
{
    int num, x;
    printf("Enter a number: "); 
    scanf("%d", &num);
    x = reverse(num, 0);
    printf("%d", x);

}