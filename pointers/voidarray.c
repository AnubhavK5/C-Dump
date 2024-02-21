#include <stdio.h>

void printarray(int *ptr, int n)
{
    for(int i = 0; i<n; i++)
    {
        ptr[2]  = 25;
        printf("Value of element %d is %d\n", i+1, ptr[i]);

    }
  
}
 
int main()
{
    int arr[] = {34, 545, 23, 54, 78};
    printarray(arr, 5);
    printf("%d", arr[2]);
    return 0;
}