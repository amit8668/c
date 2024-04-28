#include <stdio.h>

int main() {
    // Declare variables to store three numbers and the largest number
    int num1, num2, num3, largest;
    
    // Input three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    // Using ternary operator to find the largest number
    largest = (num1 > num2) ? ((num1 > num3) ? num1 : num3) : ((num2 > num3) ? num2 : num3);
    
    // Display the largest number
    printf("The largest number is: %d\n", largest);
    
    return 0;
}
