#include <stdio.h>

int main() {
    float principal, rate, time, simple_interest;

    // Input principal amount, rate of interest, and time period
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter rate of interest: ");
    scanf("%f", &rate);

    printf("Enter time period (in years): ");
    scanf("%f", &time);

    // Calculate simple interest
    simple_interest = (principal * rate * time) / 100;

    // Display the simple interest
    printf("Simple interest = %f\n", simple_interest);

    return 0;
}
