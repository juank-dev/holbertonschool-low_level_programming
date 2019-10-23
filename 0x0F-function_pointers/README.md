# 0x0F. C - Function pointers
> ## Foundations - Low-level programming & Algorithm ― Hatching out

### General

* What are function pointers and how to use them
* What does a function pointer exactly hold
* Where does a function pointer point to in the virtual memory

### FUNCTION POINTERS

Following are some interesting facts about function pointers. 

1. Unlike normal pointers, a function pointer points to code, not data. Typically a function pointer stores the start of executable code. 

2. Unlike normal pointers, we do not allocate de-allocate memory using function pointers. 

3. A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works 

4. Like normal pointers, we can have an array of function pointers. Below example in point 5 shows syntax for array of pointers. 

5. Function pointer can be used in place of switch case. For example, in below program, user is asked for a choice between 0 and 2 to do different tasks. 

6. Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function. 

7. Many object oriented features in C++ are implemented using function pointers in C. For example virtual functions. Class methods are another example implemented using function pointers. 

### How to declare a pointer to a function? 

`int * ptrInteger; /*We have put a * operator between int and ptrInteger to create a pointer.*/`

Here ptrInteger is a pointer to integer. If you understand this, then logically we should not have any problem in declaring a pointer to a function 

`int foo(int);`

Here foo is a function that returns int and takes one argument of int type. So as a logical guy will think, by putting a * operator between int and foo(int) should create a pointer to a function i.e. 

`int * foo(int);`

But Oops..C operator precedence also plays role here ..so in this case, operator () will take priority over operator *. And the above declaration will mean – a function foo with one argument of int type and return value of int * i.e. integer pointer. So it did something that we didn’t want to do.  

So as a next logical step, we have to bind operator * with foo somehow. And for this, we would change the default precedence of C operators using () operator. 

`int (*foo)(int);`

That’s it. Here * operator is with foo which is a function name. And it did the same that we wanted to do. 

A useful technique is the ability to have pointers to functions. Their declaration is easy: write the declaration as it would be for the function, say 

`int func(int a, float b);`

and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer: 

`/* function returning pointer to int */`
`int *func(int a, float b);`

`/* pointer to function returning int */`
`int (*func)(int a, float b);`

Once you've got the pointer, you can assign the address of the right sort of function just by using its name: like an array, a function name is turned into an address when it's used in an expression. You can call the function using one of two forms: 

`(*func)(1,2);`
`/* or */`
`func(1,2);`

The second form has been newly blessed by the Standard.
