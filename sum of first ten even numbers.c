#include <stdio.h>

int main() {
    int arr[10];
    int sum = 0;

    // Fill the array with the first 10 even numbers
    for(int i = 0; i < 10; i++) {
        arr[i] = (i + 1) * 2;
    }

    // Calculate the sum
    for(int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    // Display the numbers and the result
    printf("First 10 even numbers:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nSum = %d\n", sum);

    return 0;
}
