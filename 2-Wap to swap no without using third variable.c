#include <stdio.h>

int main() {
    int a, b;
    
    // Input two numbers from the user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    // Display the numbers before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);
    
    // Swapping without using a third variable
    // Adding both numbers and assigning the result to 'a'
    a = a + b;
    // Subtracting 'b' from 'a' and assigning the result to 'b'
    b = a - b;
    // Subtracting 'b' (which now holds the original value of 'a') from 'a' and assigning the result to 'a'
    a = a - b;
    
    // Display the numbers after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
