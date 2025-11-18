/*
 * Exercise: Arrays
 * 
 * Description:
 * Work with arrays to store and manipulate collections of data.
 * 
 * Learning objectives:
 * - Declare and initialize arrays
 * - Access array elements using indices
 * - Iterate through arrays
 * - Perform operations on arrays
 */

#include <stdio.h>

int main() {
    // Declare and initialize an array
    int numbers[5] = {10, 20, 30, 40, 50};
    
    // Print array elements
    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("numbers[%d] = %d\n", i, numbers[i]);
    }
    
    // Calculate sum and average
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];
    }
    float average = (float)sum / 5;
    printf("\nSum = %d\n", sum);
    printf("Average = %.2f\n", average);
    
    // Find maximum
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    printf("Maximum = %d\n", max);
    
    // 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    
    printf("\n2D Array (Matrix):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
