// print even numbers from n to n

#include <stdio.h>

int main() {
    int n, m;

    // Input the values of n and m
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Enter the value of m: ");
    scanf("%d", &m);

    // Check if n is even, if not, make it even
    if (n % 2 != 0) {
        n++;
    }

    // Using a while loop to print even numbers from n to m
    printf("Even numbers from %d to %d are:\n", n, m);
    while (n <= m) {
        printf("%d ", n);
        n += 2; // Increment by 2 to get the next even number
    }

    printf("\n");

    return 0;
}
