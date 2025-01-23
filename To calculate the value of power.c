#include <stdio.h>

// Function to calculate power using recursion
int power(int base, int exponent) {
    if (exponent == 0)
        return 1; // Base case: any number to the power of 0 is 1
    else
        return base * power(base, exponent - 1);
}

int main() {
    int base = 2;
    int exponent = 3;

    int result = power(base, exponent);

    printf("%d^%d = %d\n", base, exponent, result);

    return 0;
}

