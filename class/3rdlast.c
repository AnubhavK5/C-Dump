#include<stdio.h>
#include<math.h>
int main() {
    int a,b,c,d,e, sum;
    float root;
    printf("Enter 5 numbers:");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    if (a,b,c,d,e >=10000 && a,b,c,d,e <= 100000)
    {
    a = (a / 100)%10;
    b = (b / 100)%10;
    c = (c / 100)%10;
    d = (d / 100)%10;
    e = (e / 100)%10;
    sum = (a+b+c+d+e);
    root = sqrt(sum);
    printf("result = %f", root);
    }
    else printf("Invalid Input");
    return 0;

}