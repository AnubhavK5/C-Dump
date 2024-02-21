#include<stdio.h>
int main()
{
    int a,b;
    char op; 
    printf("'+' for Addition\n'-' for Subtraction\n'*' for Multiplication\n'/' for Division\nEnter a Operator:");
    scanf("%c",&op);
    printf("Enter first number = ");
    scanf("%d",&a);
    printf("Enter second number = ");
    scanf("%d",&b); 
    switch (op)
    {
    case '+':
        printf("%d + %d = %d",a,b,a+b);
        break;
    case '-':
        printf("%d - %d = %d",a,b,a-b);
        break;
    case '*':
        printf("%d * %d = %d",a,b,a*b);
        break;
    case '/':
        printf("%d / %d = %d",a,b,a/b);
        break;
    default:
        printf("INVALID OPERATOR");
        break;
    }
    return 0;
}

