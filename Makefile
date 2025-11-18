# Makefile for C Learning Exercises
# This makefile compiles all exercise programs

CC = gcc
CFLAGS = -Wall -Wextra -std=c11
TARGET_DIR = bin

# Source directories
BASICS_DIR = exercises/01_basics
CONTROL_DIR = exercises/02_control_flow
FUNCTIONS_DIR = exercises/03_functions
ARRAYS_DIR = exercises/04_arrays_strings
POINTERS_DIR = exercises/05_pointers
STRUCTURES_DIR = exercises/06_structures
FILEIO_DIR = exercises/07_file_io

# All target executables
BASICS_TARGETS = $(TARGET_DIR)/hello_world $(TARGET_DIR)/variables $(TARGET_DIR)/arithmetic
CONTROL_TARGETS = $(TARGET_DIR)/if_else $(TARGET_DIR)/switch $(TARGET_DIR)/for_loop $(TARGET_DIR)/while_loop
FUNCTIONS_TARGETS = $(TARGET_DIR)/basic_functions $(TARGET_DIR)/recursion
ARRAYS_TARGETS = $(TARGET_DIR)/arrays $(TARGET_DIR)/strings
POINTERS_TARGETS = $(TARGET_DIR)/basic_pointers $(TARGET_DIR)/pointers_functions
STRUCTURES_TARGETS = $(TARGET_DIR)/structures $(TARGET_DIR)/structures_pointers
FILEIO_TARGETS = $(TARGET_DIR)/file_write $(TARGET_DIR)/file_read

ALL_TARGETS = $(BASICS_TARGETS) $(CONTROL_TARGETS) $(FUNCTIONS_TARGETS) \
              $(ARRAYS_TARGETS) $(POINTERS_TARGETS) $(STRUCTURES_TARGETS) $(FILEIO_TARGETS)

# Default target
all: $(TARGET_DIR) $(ALL_TARGETS)

# Create bin directory
$(TARGET_DIR):
	mkdir -p $(TARGET_DIR)

# Basics exercises
$(TARGET_DIR)/hello_world: $(BASICS_DIR)/hello_world.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/variables: $(BASICS_DIR)/variables.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/arithmetic: $(BASICS_DIR)/arithmetic.c
	$(CC) $(CFLAGS) -o $@ $<

# Control flow exercises
$(TARGET_DIR)/if_else: $(CONTROL_DIR)/if_else.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/switch: $(CONTROL_DIR)/switch.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/for_loop: $(CONTROL_DIR)/for_loop.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/while_loop: $(CONTROL_DIR)/while_loop.c
	$(CC) $(CFLAGS) -o $@ $<

# Functions exercises
$(TARGET_DIR)/basic_functions: $(FUNCTIONS_DIR)/basic_functions.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/recursion: $(FUNCTIONS_DIR)/recursion.c
	$(CC) $(CFLAGS) -o $@ $<

# Arrays and strings exercises
$(TARGET_DIR)/arrays: $(ARRAYS_DIR)/arrays.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/strings: $(ARRAYS_DIR)/strings.c
	$(CC) $(CFLAGS) -o $@ $<

# Pointers exercises
$(TARGET_DIR)/basic_pointers: $(POINTERS_DIR)/basic_pointers.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/pointers_functions: $(POINTERS_DIR)/pointers_functions.c
	$(CC) $(CFLAGS) -o $@ $<

# Structures exercises
$(TARGET_DIR)/structures: $(STRUCTURES_DIR)/structures.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/structures_pointers: $(STRUCTURES_DIR)/structures_pointers.c
	$(CC) $(CFLAGS) -o $@ $<

# File I/O exercises
$(TARGET_DIR)/file_write: $(FILEIO_DIR)/file_write.c
	$(CC) $(CFLAGS) -o $@ $<

$(TARGET_DIR)/file_read: $(FILEIO_DIR)/file_read.c
	$(CC) $(CFLAGS) -o $@ $<

# Run all programs
run-all: all
	@echo "Running all exercises..."
	@for prog in $(ALL_TARGETS); do \
		echo ""; \
		echo "========================================"; \
		echo "Running $$prog..."; \
		echo "========================================"; \
		./$$prog; \
	done

# Clean build artifacts
clean:
	rm -rf $(TARGET_DIR)
	rm -f output.txt sample.txt

.PHONY: all run-all clean
