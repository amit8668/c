#include <stdio.h>

int main() {
    int digit;

    // Input the digit from the user
    printf("Enter a digit (0-9): ");
    scanf("%d", &digit);

    // Convert the digit into word format using a switch statement
    switch (digit) {
        case 0:
            printf("Zero\n");
            break;
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        case 3:
            printf("Three\n");
            break;
        case 4:
            printf("Four\n");
            break;
        case 5:
            printf("Five\n");
            break;
        case 6:
            printf("Six\n");
            break;
        case 7:
            printf("Seven\n");
            break;
        case 8:
            printf("Eight\n");
            break;
        case 9:
            printf("Nine\n");
            break;
        default:
            // Handle invalid input
            printf("Invalid input! Please enter a digit between 0 and 9.\n");
    }

    return 0;
}
