# 0x0D. C - Preprocessor 

 > ## Foundations - Low-level programming & Algorithm ― Hatching out 

![Alt](https://www.examtray.com/sites/default/files/styles/image_800_x_400_/public/2019-05/c-preprocessor-directives-tutorial.jpg?itok=9kpBwWFW)

### General 

* What are macros and how to use them 
* What are the most common predefined macros 
* How to include guard your header files 

### Object-like Macros 

An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants. 

You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. For example, 

    `#define BUFFER_SIZE 1024`

defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form 

    `foo = (char *) malloc (BUFFER_SIZE);`

then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written 

    `foo = (char *) malloc (1024);` 

For more information, you can visit this [link](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Object-like-Macros.html#Object-like-Macros) 

 

### Macro Arguments 

Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace. 

To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in parentheses, separated by commas. The invocation of the macro need not be restricted to a single logical line—it can cross as many lines in the source file as you wish. The number of arguments you give must match the number of parameters in the macro definition. When the macro is expanded, each use of a parameter in its body is replaced by the tokens of the corresponding argument. (You need not use all of the parameters in the macro body.) 

As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses. 

![Alt](https://i.ibb.co/prCPQGp/MACRO-EXAMPLE.png)

For more information, you can visit this [link](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Macro-Arguments.html#Macro-Arguments) 

### Standard Predefined Macros 

The standard predefined macros are specified by the relevant language standards, so they are available with all compilers that implement those standards. Older compilers may not provide all of them. Their names all start with double underscores. 

 

**__FILE__** 

This macro expands to the name of the current input file, in the form of a C string constant. This is the path by which the preprocessor opened the file, not the short name specified in ‘#include’ or as the input file name argument. For example, "/usr/local/include/myheader.h" is a possible expansion of this macro. 
 
**__LINE__** 

This macro expands to the current input line number, in the form of a decimal integer constant. While we call it a predefined macro, it's a pretty strange macro, since its “definition” changes with each new line of source code 

For more information, you can visit this [link](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Standard-Predefined-Macros.html#Standard-Predefined-Macros) 

### Common Predefined Macros 

The common predefined macros are GNU C extensions. They are available with the same meanings regardless of the machine or operating system on which you are using GNU C or GNU Fortran. Their names all start with double underscores. 

For more information, you can visit this [link](https://gcc.gnu.org/onlinedocs/gcc-5.1.0/cpp/Common-Predefined-Macros.html#Common-Predefined-Macros)

### Include guard 

In the C and C++ programming languages, an #include guard, sometimes called a macro guard, header guard or file guard, is a particular construct used to avoid the problem of double inclusion when dealing with the include directive. 

Why should we use include guards in our header files? 

* To avoid the problem of double inclusion when dealing with the include directive. 

More Information [here](https://www.learncpp.com/cpp-tutorial/header-guards/)

 