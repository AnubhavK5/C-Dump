#include <stdio.h>

int swapFirstLast(int num) {
    int last = num % 10;
    int first = num;
    int pow = 1;

    while (first >= 10) {
        first /= 10;
        pow *= 10;
    }

    int swapped = num - first * pow - last;
    swapped += last * pow + first;

    return swapped;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Number after swapping first and last digit: %d", swapFirstLast(num));
    
    return 0;
}
