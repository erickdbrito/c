/*
 * Exercise: If-Else Statements
 * 
 * Description:
 * Use if-else statements to make decisions based on conditions.
 * 
 * Learning objectives:
 * - Use if, else if, and else statements
 * - Understand comparison operators
 * - Make decisions in programs
 */

#include <stdio.h>

int main() {
    int number = 15;
    
    printf("Number: %d\n", number);
    
    // Simple if-else
    if (number > 10) {
        printf("Number is greater than 10\n");
    } else {
        printf("Number is 10 or less\n");
    }
    
    // If-else if-else chain
    if (number < 0) {
        printf("Number is negative\n");
    } else if (number == 0) {
        printf("Number is zero\n");
    } else {
        printf("Number is positive\n");
    }
    
    // Check if even or odd
    if (number % 2 == 0) {
        printf("Number is even\n");
    } else {
        printf("Number is odd\n");
    }
    
    return 0;
}
