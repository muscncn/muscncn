#include <stdio.h>

unsigned long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number < 0) {
        printf("mux: Please enter a positive integer.\n");
    } else {
        unsigned long long result = calculateFactorial(number);
        printf("The factorial of %d is %llu.\n", number, result);
    }

    return 0;
}