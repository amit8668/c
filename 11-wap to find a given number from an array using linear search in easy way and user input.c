#include <stdio.h>

int main() {
    int arr[100], n, i, key;
    int found = 0; // Flag to indicate if the key is found

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the number to search for
    printf("Enter the number you want to search for: ");
    scanf("%d", &key);

    // Linear search algorithm
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = 1; // Update the flag
            printf("%d found at position %d.\n", key, i + 1);
            break; // Exit the loop if the key is found
        }
    }

    // If the key is not found, print a message
    if (!found) {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
