#include <stdio.h>

// Function to calculate factorial
unsigned long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * calculateFactorial(n - 1);
    }
}

int main() {
    int number;

    // Ask user for input
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    // Validate input
    if (number < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        // Calculate and display the factorial
        unsigned long long result = calculateFactorial(number);
        printf("The factorial of %d is %llu.\n", number, result);
    }

    return 0;
}