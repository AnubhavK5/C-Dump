#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort2D(int arr[][4], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols - 1; j++) {
            for (int k = j + 1; k < cols; k++) {
                if (arr[i][j] > arr[i][k]) {
                    swap(&arr[i][j], &arr[i][k]);
                }
            }
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
    sort2D(arr, 4, 4);
    printf("Sorted array:\n");
    print2D(arr, 4, 4);
    return 0;
}


// #include <stdio.h>

// // A function to sort a 2D array using a single pointer and a 1D array
// void sort2D(int *arr, int rows, int cols) {
//     // Declare a temporary variable for swapping
//     int temp;
//     // Loop through each row
//     for (int i = 0; i < rows; i++) {
//         // Loop through each element in the row
//         for (int j = 0; j < cols - 1; j++) {
//             // Compare the current element with the next element
//             for (int k = j + 1; k < cols; k++) {
//                 // If the current element is greater than the next element, swap them
//                 if (*(arr + i * cols + j) > *(arr + i * cols + k)) {
//                     temp = *(arr + i * cols + j);
//                     *(arr + i * cols + j) = *(arr + i * cols + k);
//                     *(arr + i * cols + k) = temp;
//                 }
//             }
//         }
//     }
// }

// // A function to print a 2D array
// void print2D(int *arr, int rows, int cols) {
//     // Loop through each row
//     for (int i = 0; i < rows; i++) {
//         // Loop through each element in the row
//         for (int j = 0; j < cols; j++) {
//             // Print the element with a space
//             printf("%d ", *(arr + i * cols + j));
//         }
//         // Print a new line after each row
//         printf("\n");
//     }
// }

// // A sample main function to test the program
// int main() {
//     // Declare and initialize a 2D array
//     int arr[4][4] = {{8, 5, 7, 2},
//                      {7, 3, 0, 1},
//                      {8, 5, 3, 2},
//                      {9, 4, 2, 1}};
//     // Print the original array
//     printf("Original array:\n");
//     print2D((int *)arr, 4, 4);
//     // Sort the array
//     sort2D((int *)arr, 4, 4);
//     // Print the sorted array
//     printf("Sorted array:\n");
//     print2D((int *)arr, 4, 4);
//     // Return 0 to indicate success
//     return 0;
// }



