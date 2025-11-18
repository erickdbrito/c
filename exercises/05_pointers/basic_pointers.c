/*
 * Exercise: Basic Pointers
 * 
 * Description:
 * Introduction to pointers and pointer operations.
 * 
 * Learning objectives:
 * - Understand pointer concept
 * - Declare and initialize pointers
 * - Use address-of (&) and dereference (*) operators
 * - Understand pointer arithmetic
 */

#include <stdio.h>

int main() {
    // Basic pointer usage
    int num = 42;
    int *ptr = &num;  // ptr stores the address of num
    
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void*)&num);
    printf("Value of ptr (address it points to): %p\n", (void*)ptr);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Modifying value through pointer
    *ptr = 100;
    printf("\nAfter *ptr = 100:\n");
    printf("Value of num: %d\n", num);
    printf("Value pointed to by ptr: %d\n", *ptr);
    
    // Pointer arithmetic with arrays
    int arr[5] = {10, 20, 30, 40, 50};
    int *arr_ptr = arr;  // Array name is a pointer to first element
    
    printf("\nArray elements using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d (address: %p)\n", i, *(arr_ptr + i), (void*)(arr_ptr + i));
    }
    
    // Pointer and array equivalence
    printf("\nArray access methods:\n");
    printf("arr[2] = %d\n", arr[2]);
    printf("*(arr + 2) = %d\n", *(arr + 2));
    printf("*(arr_ptr + 2) = %d\n", *(arr_ptr + 2));
    
    return 0;
}
