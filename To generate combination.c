#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

// Function to calculate combinations C(n, r)
int combination(int n, int r) {
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main() {
    int n = 5; // Total number of items
    int r = 2; // Number of items to choose

    // Calculate combinations using the factorial method
    int result = combination(n, r);

    // Print the result
    printf("C(%d, %d) = %d\n", n, r, result);

    return 0;
}
