#include<stdio.h>

void main()
{
    int n, d, sum = 0, temp;
    
    // Input a number from the user
    printf("\nEnter a number: ");
    scanf("%d", &n);
    
    // Store the original number in a temporary variable
    temp = n;
    
    // Calculate the sum of cubes of digits
    while (n != 0)
    {
        // Extract the last digit
        d = n % 10;
        
        // Cube the digit and add it to the sum
        sum = sum + (d * d * d);
        
        // Remove the last digit from the number
        n = n / 10;
    }
    
    // Check if the sum of cubes of digits is equal to the original number
    if (sum == temp)
    {
        printf("\nThe number is an Armstrong number.");
    }
    else
    {
        printf("\nThe number is not an Armstrong number.");
    }
}
