# 0x10. C - Variadic functions
> ## Foundations - Low-level programming & Algorithm ― Hatching out

### General

* What are variadic functions
* How to use va_start, va_arg and va_end macros
* Why and how to use the const type qualifier

### C - Variable Arguments

Sometimes, you may come across a situation, when you want to have a function, which can take variable number of arguments, i.e., parameters, instead of predefined number of parameters. The C programming language provides a solution for this situation and you are allowed to define a function which can accept variable number of parameters based on your requirement. The following example shows the definition of such a function.

![Alt](https://i.ibb.co/PmZL8Kr/Captura.png)

It should be noted that the function func() has its last argument as ellipses, i.e. three dotes (...) and the one just before the ellipses is always an int which will represent the total number variable arguments passed. To use such functionality, you need to make use of stdarg.h header file which provides the functions and macros to implement the functionality of variable arguments and follow the given steps:

* Define a function with its last parameter as ellipses and the one just before the ellipses is always an int which will represent the number of arguments.

* Create a va_list type variable in the function definition. This type is defined in stdarg.h header file.

* Use int parameter and va_start macro to initialize the va_list variable to an argument list. The macro va_start is defined in stdarg.h header file.

* Use va_arg macro and va_list variable to access each item in argument list.

* Use a macro va_end to clean up the memory assigned to va_list variable.
