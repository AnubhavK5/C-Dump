#include<stdio.h>
#include<math.h>
int main()
 {
    int a,b,c;
    float d;
    printf("For the quadratic equation (ax^2+bx+c=0) \n");
    printf("Enter the value of a = ");
    scanf("%d",&a);
    printf("Enter the value of b = ");
    scanf("%d",&b);
    printf("Enter the value of c = ");
    scanf("%d",&c);
    d = pow(((b*b)-4*a*c), 0.5);
    printf("Ist Root = %f\n",(-b+d)/(2*a));
    printf("IInd Root = %f\n",(-b-d)/(2*a));
    return 0;
}
