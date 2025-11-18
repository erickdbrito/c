# C Learning Exercises

A comprehensive collection of C programming exercises for learning the fundamentals of C programming.

## Overview

This repository contains organized exercises covering essential C programming concepts, from basic syntax to advanced topics like pointers, structures, and file I/O. Each exercise includes detailed comments explaining the concepts and learning objectives.

## Exercise Structure

The exercises are organized into the following categories:

### 1. Basics (`exercises/01_basics/`)
- **hello_world.c** - Your first C program
- **variables.c** - Working with different data types
- **arithmetic.c** - Arithmetic operations and operators

### 2. Control Flow (`exercises/02_control_flow/`)
- **if_else.c** - Conditional statements
- **switch.c** - Switch-case statements
- **for_loop.c** - For loops and iteration
- **while_loop.c** - While and do-while loops

### 3. Functions (`exercises/03_functions/`)
- **basic_functions.c** - Function definition and usage
- **recursion.c** - Recursive functions

### 4. Arrays and Strings (`exercises/04_arrays_strings/`)
- **arrays.c** - Array declaration, initialization, and manipulation
- **strings.c** - String operations and library functions

### 5. Pointers (`exercises/05_pointers/`)
- **basic_pointers.c** - Pointer basics and arithmetic
- **pointers_functions.c** - Using pointers with functions

### 6. Structures (`exercises/06_structures/`)
- **structures.c** - Creating and using structures
- **structures_pointers.c** - Combining structures with pointers

### 7. File I/O (`exercises/07_file_io/`)
- **file_write.c** - Writing data to files
- **file_read.c** - Reading data from files

## Getting Started

### Prerequisites
- GCC compiler (or any C compiler)
- Make (optional, for using the Makefile)

### Compiling Exercises

#### Using Make (Recommended)
```bash
# Compile all exercises
make

# Run all exercises
make run-all

# Clean build artifacts
make clean
```

#### Manual Compilation
```bash
# Compile a single exercise
gcc -Wall -Wextra -std=c11 -o hello_world exercises/01_basics/hello_world.c

# Run the compiled program
./hello_world
```

## Learning Path

1. **Start with Basics** - Begin with the exercises in `01_basics` to understand fundamental C syntax
2. **Control Flow** - Move to `02_control_flow` to learn decision-making and loops
3. **Functions** - Study `03_functions` to understand code organization
4. **Data Structures** - Work through `04_arrays_strings` for collections
5. **Advanced Topics** - Progress to `05_pointers`, `06_structures`, and `07_file_io`

## How to Use

1. Read the exercise description and learning objectives in the source file comments
2. Study the provided code examples
3. Compile and run the program to see the output
4. Experiment by modifying the code to deepen your understanding
5. Try writing similar programs from scratch

## Tips for Learning

- **Read the comments** - Each file contains detailed explanations
- **Experiment** - Modify the code and observe the results
- **Build incrementally** - Master each topic before moving to the next
- **Practice** - Write your own variations of the exercises
- **Debug** - Use compiler warnings and errors as learning opportunities

## Compiler Flags Explained

The Makefile uses these compiler flags:
- `-Wall` - Enable all common warnings
- `-Wextra` - Enable extra warnings
- `-std=c11` - Use C11 standard

These flags help you write better, safer code by catching potential issues early.

## Contributing

Feel free to add more exercises or improve existing ones!

## Resources

- [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language) by Kernighan and Ritchie
- [C Reference](https://en.cppreference.com/w/c)
- [Learn C](https://www.learn-c.org/)

## License

This is educational material for learning purposes.
