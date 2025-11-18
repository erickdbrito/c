/*
 * Exercise: Structures and Pointers
 * 
 * Description:
 * Combine structures with pointers for more efficient programming.
 * 
 * Learning objectives:
 * - Create pointers to structures
 * - Use arrow operator (->) to access members
 * - Pass structures to functions by reference
 * - Understand typedef for structures
 */

#include <stdio.h>
#include <string.h>

// Define structure with typedef for convenience
typedef struct {
    char title[100];
    char author[50];
    int year;
    float price;
} Book;

// Function prototypes
void print_book(Book *book);
void update_price(Book *book, float new_price);

int main() {
    // Create book
    Book book1;
    strcpy(book1.title, "The C Programming Language");
    strcpy(book1.author, "Kernighan & Ritchie");
    book1.year = 1978;
    book1.price = 45.99;
    
    // Print book using pointer
    printf("Original book:\n");
    print_book(&book1);
    
    // Update price using pointer
    update_price(&book1, 39.99);
    printf("\nAfter price update:\n");
    print_book(&book1);
    
    // Pointer to structure
    Book book2 = {"Clean Code", "Robert Martin", 2008, 32.50};
    Book *ptr = &book2;
    
    printf("\nAccessing structure through pointer:\n");
    printf("Title: %s\n", ptr->title);
    printf("Author: %s\n", ptr->author);
    printf("Year: %d\n", ptr->year);
    printf("Price: $%.2f\n", ptr->price);
    
    return 0;
}

// Print book information using pointer
void print_book(Book *book) {
    printf("Title: %s\n", book->title);
    printf("Author: %s\n", book->author);
    printf("Year: %d\n", book->year);
    printf("Price: $%.2f\n", book->price);
}

// Update book price
void update_price(Book *book, float new_price) {
    book->price = new_price;
}
