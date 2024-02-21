#include<stdio.h>
int main()
{

    int temp, num, index, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a number;");
    scanf("%d", &num);
    printf("Enter index where you want the number:");
    scanf("%d", &index);
    // n++;
    for(int i = n; i>index; i--)
    {
        temp = a[i-1];
        a[i] = temp;


    }
    a[index] = num;
    for(int i = 0; i<n+1; i++)
    {
        printf("%d\n", a[i]);
    }
}