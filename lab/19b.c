

#include <stdio.h>

int factorial(int num) {
    if (num == 0)
        return 1;
    return num * factorial(num - 1);
}

double sumOfSeries(int n) {
    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (double)i / factorial(i);
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    double result = sumOfSeries(n);
    printf("Sum of the series is: %lf\n", result);

    return 0;
}

