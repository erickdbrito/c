/*
 * Exercise: File Writing
 * 
 * Description:
 * Write data to files using file I/O operations.
 * 
 * Learning objectives:
 * - Open files for writing
 * - Write text to files
 * - Close files properly
 * - Handle file operations
 */

#include <stdio.h>

int main() {
    FILE *file;
    
    // Open file for writing (creates if doesn't exist, overwrites if exists)
    file = fopen("output.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    // Write to file
    fprintf(file, "Hello, File I/O!\n");
    fprintf(file, "This is line 2.\n");
    fprintf(file, "Writing numbers: %d, %d, %d\n", 1, 2, 3);
    
    // Close file
    fclose(file);
    
    printf("Data written to output.txt successfully!\n");
    
    // Append to file
    file = fopen("output.txt", "a");
    if (file == NULL) {
        printf("Error opening file for append!\n");
        return 1;
    }
    
    fprintf(file, "This line is appended.\n");
    fclose(file);
    
    printf("Data appended to output.txt successfully!\n");
    
    return 0;
}
