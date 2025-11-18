/*
 * Exercise: Variables and Data Types
 * 
 * Description:
 * Declare and initialize variables of different types,
 * then print their values.
 * 
 * Learning objectives:
 * - Declare variables of different types (int, float, char, double)
 * - Initialize variables
 * - Use printf() with format specifiers
 * - Understand basic data types in C
 */

#include <stdio.h>

int main() {
    // Integer variable
    int age = 25;
    
    // Float variable
    float height = 5.9;
    
    // Character variable
    char grade = 'A';
    
    // Double variable
    double pi = 3.14159265359;
    
    // Print all variables
    printf("Age: %d\n", age);
    printf("Height: %.1f feet\n", height);
    printf("Grade: %c\n", grade);
    printf("Pi: %.5f\n", pi);
    
    return 0;
}
