/*
 * Exercise: Recursion
 * 
 * Description:
 * Implement recursive functions that call themselves.
 * 
 * Learning objectives:
 * - Understand recursion concept
 * - Implement base cases
 * - Use recursive calls
 * - Solve problems recursively
 */

#include <stdio.h>

// Function prototypes
int factorial(int n);
int fibonacci(int n);
int sum_to_n(int n);

int main() {
    // Factorial
    int n = 5;
    printf("Factorial of %d = %d\n", n, factorial(n));
    
    // Fibonacci sequence
    printf("\nFibonacci sequence (first 10 numbers):\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", fibonacci(i));
    }
    printf("\n");
    
    // Sum from 1 to n
    int num = 10;
    printf("\nSum of numbers 1 to %d = %d\n", num, sum_to_n(num));
    
    return 0;
}

// Factorial: n! = n * (n-1) * (n-2) * ... * 1
int factorial(int n) {
    if (n <= 1) {
        return 1;  // Base case
    }
    return n * factorial(n - 1);  // Recursive case
}

// Fibonacci: F(n) = F(n-1) + F(n-2)
int fibonacci(int n) {
    if (n <= 1) {
        return n;  // Base cases: F(0) = 0, F(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Sum from 1 to n
int sum_to_n(int n) {
    if (n <= 0) {
        return 0;  // Base case
    }
    return n + sum_to_n(n - 1);  // Recursive case
}
