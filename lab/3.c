#include<stdio.h>
int main()
 {
    int S, AnR;
    printf("Input basic salary = Rs. ");
    scanf("%d",&S);
    AnR = 0.6*S;
    printf("Gross Salary = Rs.%d\n", S + AnR);
    return 0;
}
