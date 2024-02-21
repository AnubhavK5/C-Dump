#include <stdio.h>

void printPrimes(int n) {
    printf("Prime numbers up to %d are: ", n);
    
    for (int num = 2; num <= n; num++) {
        int i = 2;
        while (i <= num/2) {
            if (num % i == 0) break;
            i++;
        }
        if (i > num/2) printf("%d ", num);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printPrimes(n);
    
    return 0;
}
