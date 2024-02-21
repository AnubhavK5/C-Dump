#include<stdio.h>
int main()
{
    int temp, a[] = {23, 56, 1, 324, 14, 22}, index;
    int n = sizeof(a)/sizeof(int);
    printf("Enter index number ater which you want no to be reversed:");
    scanf("%d", &index);
    // for (int i = index + 1, j = n - 1; i < j; i++, j--)
    // {
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    // }
    for(int i = n-1; i>index; i--)
{
    temp = a[i];
    a[i] = a[n-1-i];
    a[n-1-i] = temp;
}
    // a[index] = num;
    for(int i = 0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
}
    
