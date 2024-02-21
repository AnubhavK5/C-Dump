#include <stdio.h>
#define MAX 100 // Maximum array size

// Function to check for duplicate elements
int hasDuplicates(int arr[], int size) {
    int temp[MAX] = {0}; // Initialize an auxiliary array

    for (int i = 0; i < size; i++) {
        if (temp[arr[i]] == 1) {
            // printf
            return 1; // Duplicate found
        }
        temp[arr[i]] = 1; // Mark the element as seen
    }

    return 0; // No duplicates found
    
}

// temp[arr[i]]:
// arr[i] represents the current element in the original array.
// temp[arr[i]] accesses the corresponding position in the auxiliary array temp.
// The value at temp[arr[i]] will be either 0 or 1.
// if (temp[arr[i]] == 1):
// This condition checks whether the value at temp[arr[i]] is equal to 1.
// If it is, it means we have already encountered this element before (i.e., it’s a duplicate).
// In that case, we return 1 to indicate that a duplicate has been found.

int main() {
    int arr[MAX];
    int size;

    // Input size of array
    printf("Enter size of the array: ");
    scanf("%d", &size);

    // Input elements in array
    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    if (hasDuplicates(arr, size)) {
        printf("The array contains duplicate elements.\n");
    } else {
        printf("The array does not have any duplicates.\n");
    }

    return 0;
}
