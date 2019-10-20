# 0x02. C - Functions, nested loops
> ## Foundations - Low-level programming & Algorithm ― Hatching out

### General

![Alt](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcTxG6uk4H91CkjaGn-dpt3i7wb9yJfRb4hGvCbu2zqvVUqMLSRrAw)

* What are nested loops and how to use them
* What is a function and how do you use functions
* What is the difference between a declaration and a definition of a function
* What is a prototype
* Scope of variables
* What are the gcc flags -Wall -Werror -pedantic -Wextra
* What are header files and how to to use them with #include

### What is the purpose of a function prototype?

The Function prototype serves the following purposes –

1. It tells the return type of the data that the function will return.
2. It tells the number of arguments passed to the function.
3. It tells the data types of the each of the passed arguments.
4. Also it tells the order in which the arguments are passed to the function.

Therefore essentially, function prototype specifies the input/output interlace to the function i.e. what to give to the function and what to expect from the function.

Prototype of a function is also called signature of the function.

### C - Header Files

A header file is a file with extension .h which contains C function declarations and macro definitions to be shared between several source files. There are two types of header files: the files that the programmer writes and the files that comes with your compiler.

You request to use a header file in your program by including it with the C preprocessing directive #include, like you have seen inclusion of stdio.h header file, which comes along with your compiler.

Including a header file is equal to copying the content of the header file but we do not do it because it will be error-prone and it is not a good idea to copy the content of a header file in the source files, especially if we have multiple source files in a program.

Both the user and the system header files are included using the preprocessing directive #include. It has the following two forms −

> **#include <file**
* This form is used for system header files. It searches for a file named 'file' in a standard list of system directories. You can prepend directories to this list with the -I option while compiling your source code.

> **#include "file"**
* This form is used for header files of your own program. It searches for a file named 'file' in the directory containing the current file. You can prepend directories to this list with the -I option while compiling your source code.

