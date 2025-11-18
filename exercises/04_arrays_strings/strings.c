/*
 * Exercise: Strings
 * 
 * Description:
 * Work with strings (character arrays) in C.
 * 
 * Learning objectives:
 * - Understand strings as character arrays
 * - Use string library functions
 * - Manipulate strings
 * - Handle string input/output
 */

#include <stdio.h>
#include <string.h>

int main() {
    // String declaration and initialization
    char greeting[50] = "Hello";
    char name[50] = "World";
    
    printf("Greeting: %s\n", greeting);
    printf("Name: %s\n", name);
    
    // String length
    printf("\nLength of greeting: %lu\n", strlen(greeting));
    
    // String concatenation
    strcat(greeting, ", ");
    strcat(greeting, name);
    strcat(greeting, "!");
    printf("Concatenated: %s\n", greeting);
    
    // String copy
    char copy[50];
    strcpy(copy, "Copy of string");
    printf("Copy: %s\n", copy);
    
    // String comparison
    char str1[20] = "Apple";
    char str2[20] = "Banana";
    if (strcmp(str1, str2) == 0) {
        printf("\n%s and %s are equal\n", str1, str2);
    } else if (strcmp(str1, str2) < 0) {
        printf("\n%s comes before %s alphabetically\n", str1, str2);
    } else {
        printf("\n%s comes after %s alphabetically\n", str1, str2);
    }
    
    // Character access
    char word[20] = "Programming";
    printf("\nCharacters in '%s':\n", word);
    for (int i = 0; word[i] != '\0'; i++) {
        printf("%c ", word[i]);
    }
    printf("\n");
    
    return 0;
}
