#include <stdio.h>

void sort(int arr[], int n) {
    int i, j;

    for(int i = 0; i<n; i++)
    {
        for(int j = i+1; j<n; j++)
        {
            if(arr[i]>arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

            }
        }
    }
}

void flatten(int arr[][100], int rows, int cols, int flat[]) {
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            flat[k++] = arr[i][j];
        }
    }
}

void reshape(int flat[], int rows, int cols, int arr[][100]) {
    int k = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            arr[i][j] = flat[k++];
        }
    }
}

int main() {
    int rows, cols;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int arr[100][100];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int flat[10000];
    flatten(arr, rows, cols, flat);

    sort(flat, rows * cols);

    reshape(flat, rows, cols, arr);

    printf("The sorted array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
