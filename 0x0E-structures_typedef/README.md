# 0x0E. C - Structures, typedef
> ## Foundations - Low-level programming & Algorithm ― Hatching out

### General

* What are structures, when, why and how to use them
* How to use typedef

![Alt](https://i.ytimg.com/vi/QhwFwWpq4dQ/maxresdefault.jpg)

## STRUCTURES

A struct in the C programming language (and many derivatives) is a composite data type (or record) declaration that defines a physically grouped list of variables under one name in a block of memory, allowing the different variables to be accessed via a single pointer or by the struct declared name which returns the same address. The struct data type can contain other data types so is used for mixed-data-type records such as a hard-drive directory entry (file length, name, extension, physical address, etc.), or other mixed-type records (name, address, telephone, balance, etc.).
The general syntax for a struct declaration in C is:

![Alt](https://i.ibb.co/p3jB0wV/STRUCT-AND-TYPEDEF.png)

## Pointers to struct

Pointers can be used to refer to a struct by its address. This is useful for passing structs to a function. The pointer can be dereferenced using the * operator. The -> operator dereferences the pointer to struct (left operand) and then accesses the value of a member of the struct (right operand).

![Alt](https://i.ibb.co/4dnRYV6/struct1.png)

## TYPEDEF

typedef is a reserved keyword in the C and C++ programming languages. It is used to create an alias name for another data type.[1] As such, it is often used to simplify the syntax of declaring complex data structures consisting of struct and union types, but is just as common in providing specific descriptive type names for integer data types of varying lengths.

![Alt](https://i.ibb.co/YNdTn4Q/typedef1.png)
