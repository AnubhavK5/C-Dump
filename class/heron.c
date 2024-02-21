#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,s,area;
    printf("Enter three sides of a triangle:");
    scanf("%d%d%d",&a, &b,&c);
    if (a+b>c && b+c>a && a+c>b)
    {
        s = a + b + c;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
        printf("Area of the triangle is %d", area);

    }
    else 
    printf("The commbination of this values does not form a triangle");
    return 0;

}