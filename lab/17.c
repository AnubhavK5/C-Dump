#include<stdio.h>
#include<math.h>
int armstrong()
{
    int rem,num, sum=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int num1=num;
    int digits = log10(num);
    while (num>0)
    {
        rem = num%10;
        sum += pow(rem,digits+1);
        num/=10;
    }
    if (num1==sum)  return 1;
    else return 0;

}

int main()
{
    int x;
    x = armstrong();
    if (x==1)  
        printf("Armstrong number.");
    else
        printf("Not a armstrong number.");
    
}