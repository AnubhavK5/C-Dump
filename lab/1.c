/*WAP to input marks obtained by a student in five different subjects through the keyboard. Find out the 
aggregate marks and percentage marks obtained by the student. Assume that the maximum mark that 
can be obtained by a student in each subject is 100. 
*/
#include<stdio.h>
int main()
{
    int e, cs, m, c, p, Total;
    float P;
    printf("Enter ENGLISH marks = ");
    scanf("%d",&e);
    printf("Enter COMPUTER SCIENCE marks = ");
    scanf("%d",&cs);
    printf("Enter MATHS marks = ");
    scanf("%d",&m);
    printf("Enter CHEMISTRY marks = ");
    scanf("%d",&c);
    printf("Enter PHYSICS marks = ");
    scanf("%d",&p);

    Total = e+cs+m+c+p;
    printf("Aggregate Marks Obtained = %d\n", Total);
    P=(Total/500.0)*100;
    printf("Percentage Marks Obtained = %f",P);
    return 0;
}