/*
 * Exercise: While Loop
 * 
 * Description:
 * Use while loops to repeat actions while a condition is true.
 * 
 * Learning objectives:
 * - Understand while loop syntax
 * - Use condition-controlled loops
 * - Avoid infinite loops
 */

#include <stdio.h>

int main() {
    // Basic while loop
    int count = 1;
    printf("Counting with while loop:\n");
    while (count <= 5) {
        printf("%d ", count);
        count++;
    }
    printf("\n\n");
    
    // Sum of numbers
    int sum = 0;
    int n = 1;
    printf("Sum of numbers 1 to 10:\n");
    while (n <= 10) {
        sum += n;
        n++;
    }
    printf("Sum = %d\n\n", sum);
    
    // Do-while loop (executes at least once)
    int i = 1;
    printf("Do-while loop example:\n");
    do {
        printf("%d ", i);
        i++;
    } while (i <= 5);
    printf("\n");
    
    return 0;
}
