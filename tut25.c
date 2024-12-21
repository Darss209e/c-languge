#include <stdio.h>

// Function to print Fibonacci sequence
void fibonacci(int n) {
    // First two Fibonacci numbers
    long long int a = 0, b = 1, next;

    printf("Fibonacci sequence up to %d terms: \n", n);

    // If n is 1, print only the first term
    if (n >= 1) {
        printf("%lld ", a);
    }

    // If n is 2, print the first two terms
    if (n >= 2) {
        printf("%lld ", b);
    }

    // Generate the remaining Fibonacci numbers
    for (int i = 3; i <= n; i++) {
        next = a + b;  // The next term is the sum of the previous two
        printf("%lld ", next);
        a = b;  // Update 'a' to the last term
        b = next;  // Update 'b' to the current term
    }

    printf("\n");
}

int main() {
    int n;

    // Get the number of terms from the user
    printf("Enter the number of terms in Fibonacci sequence:\n ");
    scanf("%d", &n);

    // Call the fibonacci function
    fibonacci(n);

    return 0;
}
