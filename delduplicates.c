#include <stdio.h>

void DelDuplicates(int arr[], int n)
{
    printf("Before Deleting Duplicates elements:\n");
    for(int i = 0; i<n; i++)
    {
        printf("\t%d\n", arr[i]);
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            int c = 1;
            if (arr[i] == arr[j])
            {
                if(c==1)  continue;
                else{
                    for(int k = j; k<n; k++)
                    {
                        arr[k] = arr[k+1];
                    }
                    c++;
                    n--;
                }
            }
        }
    }
    printf("After deleting duplicates:\n");
    for(int i = 0; i<n; i++)
    {
        printf("\t%d\n", arr[i]);
    }
}
 
int main()
{
    int a[] = {34, 34, 534, 454, 545,34, 542};
    int size = sizeof(a)/sizeof(int);
    DelDuplicates(a, size);
    return 0;
}