#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1)
        return 0; // 0 and 1 are not prime

    // Loop through numbers from 2 to the square root of n
    for (int i = 2; i * i <= n; i++) {
        // If n is divisible by any number from 2 to sqrt(n), it's not prime
        if (n % i == 0)
            return 0;
    }

    // If n is not divisible by any number from 2 to sqrt(n), it's prime
    return 1;
}

int main() {
    int count = 0; // Counter for prime numbers
    int num = 2;   // Starting from 2, the first prime number

    printf("First 100 prime numbers:\n");

    // Loop until 100 prime numbers are printed
    while (count < 100) {
        if (isPrime(num)) {
            printf("%d ", num);
            count++;
        }
        num++;
    }

    return 0;
}
