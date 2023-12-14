# Libft

## Overview
Libft is a custom C library developed as part of the 42 School curriculum. It reimplements several standard C library functions, as well as additional utility functions and data structures, to help students understand the inner workings of these essential functions.

## Key Features
- **Standard Library Functions**: Reimplementations of standard C library functions like `ft_strlen`, `ft_strdup`, `ft_strjoin`, `ft_split`, and more.
- **Memory Functions**: Custom implementations of memory manipulation functions such as `ft_memset`, `ft_memcpy`, `ft_memmove`, and others.
- **String Manipulation**: Functions for string manipulation including `ft_substr`, `ft_strtrim`, `ft_striteri`, and `ft_strmapi`.
- **Linked List Operations**: A set of functions for managing linked lists, including `ft_lstnew`, `ft_lstadd_front`, `ft_lstadd_back`, and more.
- **Conversion Functions**: Functions like `ft_atoi` and `ft_itoa` for converting strings to integers and vice versa.
- **File Descriptor Functions**: Utility functions for writing to file descriptors, such as `ft_putchar_fd`, `ft_putstr_fd`, `ft_putendl_fd`, and `ft_putnbr_fd`.

## Compilation
The library can be compiled using the provided `Makefile`:
- To compile the library: `make all`
- To compile with bonus functions: `make bonus`
- To clean up object files: `make clean`
- To remove objects and the library file: `make fclean`
- To recompile: `make re`

## Usage
Include `libft.h` in your C projects to use the library functions. Compile your project with the `libft.a` library file.

## Technologies Used
- C programming language
- Makefile for compilation
