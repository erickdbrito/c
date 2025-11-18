/*
 * Exercise: File Reading
 * 
 * Description:
 * Read data from files using file I/O operations.
 * 
 * Learning objectives:
 * - Open files for reading
 * - Read text from files
 * - Process file content
 * - Handle end of file
 */

#include <stdio.h>

int main() {
    FILE *file;
    char line[256];
    
    // First, create a sample file to read
    file = fopen("sample.txt", "w");
    if (file != NULL) {
        fprintf(file, "Line 1: Hello World\n");
        fprintf(file, "Line 2: Learning C\n");
        fprintf(file, "Line 3: File I/O Operations\n");
        fprintf(file, "Line 4: End of file\n");
        fclose(file);
        printf("Sample file created.\n\n");
    }
    
    // Open file for reading
    file = fopen("sample.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    printf("Reading from sample.txt:\n");
    printf("------------------------\n");
    
    // Read line by line
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }
    
    // Close file
    fclose(file);
    
    printf("\n");
    
    // Read character by character
    file = fopen("sample.txt", "r");
    if (file != NULL) {
        printf("\nCharacter count: ");
        int count = 0;
        int ch;
        while ((ch = fgetc(file)) != EOF) {
            count++;
        }
        printf("%d characters\n", count);
        fclose(file);
    }
    
    return 0;
}
