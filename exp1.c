#include <stdio.h>

// Function to calculate factorial recursively
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    // Get user input for a number
    int num;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);

    // Check if the number is non-negative
    if (num < 0) {
        printf("Please enter a non-negative integer.\n");
    } else {
        // Calculate and print the factorial
        int result = factorial(num);
        printf("Factorial of %d = %d\n", num, result);
    }

    return 0;
}
