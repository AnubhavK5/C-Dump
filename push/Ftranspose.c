#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int temp;
void Transpose(int arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = i+1; j < cols; j++) {
                    
            temp = arr[i][j];
            arr[i][j]  = arr[j][i];
            arr[j][i] = temp;
        }
    }
}

void print2D(int arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[4][4] = {{8, 5, 7, 2},
                     {7, 3, 0, 1},
                     {8, 5, 3, 2},
                     {9, 4, 2, 1}};
    printf("Original array:\n");
    print2D(arr, 4, 4);
    Transpose(arr, 4, 4);
    printf("Sorted array:\n");
    print2D(arr, 4, 4);
    return 0;
}
