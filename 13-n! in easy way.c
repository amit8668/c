#include <stdio.h>

// Function to calculate the factorial of a number
int factorial(int num) {
    if (num == 0 || num == 1) {
        return 1;
    } else {
        int fact = 1;
        // Calculate the factorial of num
        for (int i = 2; i <= num; i++) {
            fact *= i;
        }
        return fact;
    }
}

int main() {
    int n;
    double sum = 0.0;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Loop through each term of the series
    for (int i = 1; i <= n; i++) {
        // Calculate the current term of the series
        double term = (double)i / factorial(i);
        
        // Add or subtract the term based on its position in the series
        if (i % 2 == 0) { // For even terms, subtract from the sum
            sum -= term;
        } else { // For odd terms, add to the sum
            sum += term;
        }
    }

    // Print the sum of the series
    printf("Sum of the series: %.4lf\n", sum);

    return 0;
}
