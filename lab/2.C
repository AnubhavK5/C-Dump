#include<stdio.h>
int main() 
{
    float l,b,radius;
    printf("Enter length of Rectangle = ");
    scanf("%f",&l);
    printf("Enter breadth of Rectangle = ");
    scanf("%f",&b);
    printf("Enter radius of Circle = ");
    scanf("%f",&radius);
    printf("Perimeter of Rectangle = %f\n", 2*(l+b));
    printf("Area of Rectangle = %f\n", l*b);
    printf("Circumference of Circle = %f\n", 3.14*2*radius);
    printf("Area of Circle = %f\n", 3.14*radius*radius);
    return 0;
}
