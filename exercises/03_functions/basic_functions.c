/*
 * Exercise: Basic Functions
 * 
 * Description:
 * Create and use functions to organize code.
 * 
 * Learning objectives:
 * - Define functions with parameters
 * - Return values from functions
 * - Understand function prototypes
 * - Call functions from main
 */

#include <stdio.h>

// Function prototypes
int add(int a, int b);
int multiply(int a, int b);
void greet(char name[]);
int square(int n);

int main() {
    // Using functions
    int result1 = add(5, 3);
    printf("5 + 3 = %d\n", result1);
    
    int result2 = multiply(4, 6);
    printf("4 * 6 = %d\n", result2);
    
    greet("Alice");
    
    int num = 7;
    printf("Square of %d = %d\n", num, square(num));
    
    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int multiply(int a, int b) {
    return a * b;
}

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int square(int n) {
    return n * n;
}
