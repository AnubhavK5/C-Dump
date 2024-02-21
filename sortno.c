#include <stdio.h>
 
int main()
{
    int a[] = {1, 5, 6, 8}, b[] = {2, 6, 7, 9, 43};
    int size_a = sizeof(a)/sizeof(int);
    int size_b = sizeof(b)/sizeof(int);
    int c[size_a + size_b];
    int i = 0, j = 0, k = 0;
    while((i<size_a) && (j< size_b))
    {
        if (a[i] <= b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }
        k++;
    }

    while(j<= size_b)
    {
        c[k] = b[j]; 
        j++;
        k++;
    }
    
    while(i<= size_a)
    {
        c[k] = a[i]; 
        i++;
        k++;
    }

    for(int i = 0; i<size_a + size_b; i++)
    {
        printf("%d\n", c[i]);
    }
    
    return 0;
}