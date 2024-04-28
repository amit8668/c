#include<stdio.h>

int main() {
    int first, second, *p, *q, sum;

    // Input two integers to add
    printf("Enter two integers to add: ");
    scanf("%d %d", &first, &second);

    // Assign addresses of the integers to pointers p and q
    p = &first;
    q = &second;

    // Calculate the sum using dereferenced pointers
    sum = *p + *q;

    // Display the sum of the entered numbers
    printf("Sum of entered numbers = %d\n", sum);

    return 0;
}
