/*
 * Exercise: Pointers and Functions
 * 
 * Description:
 * Use pointers to pass data to functions and modify values.
 * 
 * Learning objectives:
 * - Pass pointers to functions
 * - Modify values through pointers (pass by reference)
 * - Understand difference between pass by value and pass by reference
 * - Return pointers from functions (carefully!)
 */

#include <stdio.h>

// Function prototypes
void swap(int *a, int *b);
void increment(int *value);
void modify_array(int *arr, int size);

int main() {
    // Swap two numbers using pointers
    int x = 10, y = 20;
    printf("Before swap: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After swap: x = %d, y = %d\n\n", x, y);
    
    // Increment a value using pointer
    int count = 5;
    printf("Before increment: count = %d\n", count);
    increment(&count);
    printf("After increment: count = %d\n\n", count);
    
    // Modify array using pointer
    int numbers[5] = {1, 2, 3, 4, 5};
    printf("Original array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    modify_array(numbers, 5);
    printf("Modified array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    return 0;
}

// Swap two integers using pointers
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Increment value through pointer
void increment(int *value) {
    (*value)++;
}

// Modify array elements (double each value)
void modify_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] *= 2;
    }
}
