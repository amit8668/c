#include<stdio.h>

void main()
{
    // Declare variables to store input and temporary value for swapping
    int a, b, c;
    
    // Prompt the user to enter two numbers
    printf("Enter two numbers: ");
    
    // Read the input values from the user
    scanf("%d %d", &a, &b);
    
    // Display the values before swapping
    printf("\nBefore swapping:"
           "\na = %d \nb = %d", a, b);
    
    // Swap the values of a and b using a temporary variable c
    c = a;
    a = b;
    b = c;
    
    // Display the values after swapping
    printf("\nAfter swapping:"
           "\na = %d \nb = %d", a, b);
}
