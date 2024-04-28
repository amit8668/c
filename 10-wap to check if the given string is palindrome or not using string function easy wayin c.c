#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len;
    int isPalindrome = 1; // Assume the string is a palindrome by default

    // Input a string
    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    // Check if the string is a palindrome
    for (i = 0; i < len / 2; i++) {
        // Compare characters from the beginning and end of the string
        if (str[i] != str[len - 1 - i]) {
            isPalindrome = 0; // If characters don't match, it's not a palindrome
            break;
        }
    }

    // Display the result
    if (isPalindrome) {
        printf("%s is a palindrome.\n", str);
    } else {
        printf("%s is not a palindrome.\n", str);
    }

    return 0;
}
