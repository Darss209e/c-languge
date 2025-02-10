#include <stdio.h>

int isPalindrome(int num) {
    int original = num;
    int reversed = 0;
    int remainder;

    // Reverse the digits of the number
    while (num != 0) {
        remainder = num % 10;           // Get the last digit
        reversed = reversed * 10 + remainder; // Build the reversed number
        num /= 10;                      // Remove the last digit
    }

    // Check if the original number is equal to its reversed version
    if (original == reversed)
        return 1; // Palindrome
    else
        return 0; // Not a palindrome
}

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is a palindrome
    if (isPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
