#include<stdio.h>
#include<math.h>
#include<stdbool.h>
// void armstrong(void);
// void pallindrome(void);
// void prime(void);

void armstrong(void)
{   
    int num, digits,sum=0,rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp = num;
    
    digits = (int)log10(num);
    //  printf("%d", digits);

    while(num!=0)
    {   
        rem = num%10;
        sum += pow(rem,digits+1);
        num/=10;

    }
    // printf("%d", sum);
    if (sum==temp) printf("%d",1);
    else printf("%d",0);
    

}



int main()
{
    int in, num;
    printf()
    scanf("%d", &in);
    bool run = true;
    while (run)
    {
    switch(in) 
    {
        case 1 :
        armstrong();
        break;
        case 2 :
        // pallindrome()
        return 1;
        break;
        case 3 :
        // prime();
         return 1;
         break;
        default : 
            run = false;
    }
}
}
