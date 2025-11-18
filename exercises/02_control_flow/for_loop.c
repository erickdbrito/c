/*
 * Exercise: For Loop
 * 
 * Description:
 * Use for loops to repeat actions a specific number of times.
 * 
 * Learning objectives:
 * - Understand for loop syntax
 * - Use loop counter variables
 * - Create counting and iteration patterns
 */

#include <stdio.h>

int main() {
    // Basic for loop
    printf("Counting from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Counting backwards
    printf("Counting backwards from 10 to 1:\n");
    for (int i = 10; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Counting by 2s
    printf("Even numbers from 2 to 20:\n");
    for (int i = 2; i <= 20; i += 2) {
        printf("%d ", i);
    }
    printf("\n\n");
    
    // Multiplication table
    int num = 5;
    printf("Multiplication table for %d:\n", num);
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
