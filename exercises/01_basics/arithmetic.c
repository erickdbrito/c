/*
 * Exercise: Arithmetic Operations
 * 
 * Description:
 * Perform basic arithmetic operations on numbers.
 * 
 * Learning objectives:
 * - Use arithmetic operators (+, -, *, /, %)
 * - Understand operator precedence
 * - Work with integer and floating-point arithmetic
 */

#include <stdio.h>

int main() {
    int a = 10;
    int b = 3;
    
    printf("a = %d, b = %d\n\n", a, b);
    
    // Basic operations
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    printf("Division: %d / %d = %d\n", a, b, a / b);
    printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    
    // Floating-point division
    float result = (float)a / b;
    printf("\nFloating-point division: %.2f / %d = %.2f\n", (float)a, b, result);
    
    return 0;
}
