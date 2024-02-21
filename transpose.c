#include <stdio.h>
#define r 3
#define c 3

// int transpose()
 
int main()
{
    int a[][3] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}}, temp;
    printf("Original array\n");
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        { 
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    for(int i = 0; i<r; i++)
    {
        for(int j = i+1; j<c; j++)
        {
            temp = a[i][j];
            a[i][j]  = a[j][i];
            a[j][i] = temp;
        }
    }


    printf("After Transpose:\n");
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        { 
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}


