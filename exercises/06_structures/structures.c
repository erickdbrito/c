/*
 * Exercise: Structures
 * 
 * Description:
 * Use structures to create custom data types.
 * 
 * Learning objectives:
 * - Define structures
 * - Create structure variables
 * - Access structure members
 * - Use structures with functions
 * - Create arrays of structures
 */

#include <stdio.h>
#include <string.h>

// Define a structure
struct Student {
    char name[50];
    int age;
    float gpa;
};

// Function to print student information
void print_student(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Age: %d\n", s.age);
    printf("GPA: %.2f\n", s.gpa);
}

int main() {
    // Create and initialize a structure variable
    struct Student student1;
    strcpy(student1.name, "Alice Johnson");
    student1.age = 20;
    student1.gpa = 3.8;
    
    // Print student information
    printf("Student 1:\n");
    print_student(student1);
    printf("\n");
    
    // Initialize structure during declaration
    struct Student student2 = {"Bob Smith", 22, 3.5};
    printf("Student 2:\n");
    print_student(student2);
    printf("\n");
    
    // Array of structures
    struct Student class[3] = {
        {"Carol White", 21, 3.9},
        {"David Brown", 20, 3.6},
        {"Emma Davis", 23, 3.7}
    };
    
    printf("Class roster:\n");
    for (int i = 0; i < 3; i++) {
        printf("\nStudent %d:\n", i + 1);
        print_student(class[i]);
    }
    
    // Calculate average GPA
    float total_gpa = 0;
    for (int i = 0; i < 3; i++) {
        total_gpa += class[i].gpa;
    }
    printf("\nAverage GPA: %.2f\n", total_gpa / 3);
    
    return 0;
}
