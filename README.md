# Personal Notes on curriculum projects

# C LIBRARY
A library is a file containing several object files, that can be used as a single entity in a linking phase of a program. Normally the library is indexed, so it is easy to find symbols (functions, variables and so on) in them. For this reason, linking a program whose object files are ordered in libraries is faster than linking a program whose object files are separate on the disk. 


## STATIC LIBRARIES

Static libraries are just collections of object files that are linked into the program during the linking phase of compilation, and are not relevant during runtime.
A static library is a compiled object file containing all symbols required by the main program to operate (functions, variables etc.) as opposed to having to pull in separate entities.

### How they are created

Static libraries are created using some type of archiving software, such as ar.
ar takes one or more object files (that end in .o), zips them up, and generates an archive file (ends in .a) — This is our “static library”.

 In order to create a static library, we can use a command like this:

ar rc libutil.a util_file.o util_net.o util_math.o

This command creates a static library named 'libutil.a' and puts copies of the object files "util_file.o", "util_net.o" and "util_math.o" in it. If the library file already exists, it has the object files added to it, or replaced, if they are newer than those inside the library. The 'c' flag tells ar to create the library if it doesn't already exist. The 'r' flag tells it to replace older object files in the library, with the new object files.

After an archive is created, or modified, there is a need to index it. This index is later used by the compiler to speed up symbol-lookup inside the library, and to make sure that the order of the symbols in the library won't matter during compilation 

##Process

> Create header files containing declarations.

> Create source files containing definitions for the declarations.

> Compile all source files to be included in the library.

> Link the resulting object files into a static libary

> Make headers and the library available to the clients.

# Arguments to main

Arguments to main provide a useful opportunity to give parameters to programs.
Up until now, the skeletons we have used for our C programs have looked something like this:

#include <stdio.h>

int main()
{

  return 0;
}
From now on, our examples may look a bit more like this:

#include <stdio.h>

int main (int argc, char *argv[])
{

  return 0;
}
As you can see, main now has arguments. The name of the variable argc stands for "argument count"; argc contains the number of arguments passed to the program. The name of the variable argv stands for "argument vector". A vector is a one-dimensional array, and argv is a one-dimensional array of strings. Each string is one of the arguments that was passed to the program.

For example, the command line

gcc -o myprog myprog.c
would result in the following values internal to GCC:


argc
4
argv[0]
gcc
argv[1]
-o
argv[2]
myprog
argv[3]
myprog.c
As you can see, the first argument (argv[0]) is the name by which the program was called, in this case gcc. Thus, there will always be at least one argument to a program, and argc will always be at least 1.





# 0x0B. C - malloc, free
The malloc function is used to allocate a certain amount of memory during the execution of a program.
 It will request a block of memory from the heap. If the request is granted, the operating system will reserve the requested amount of memory and malloc will return a pointer to the reserved space.
When the amount of memory is not needed anymore, you must return it to the operating system by calling the function [free].

# Valgrind
When writing big and complex programs, it is not always easy to keep track of all allocated and deallocated memory. We can use the program Valgrind in order to ensure we are freeing all allocated memory. It is a programming tool for memory debugging, memory leak detection, and profiling.

#  Object-like Macros

An object-like macro is a simple identifier which will be replaced by a code fragment. It is called object-like because it looks like a data object in code that uses it. They are most commonly used to give symbolic names to numeric constants.
You create macros with the ‘#define’ directive. ‘#define’ is followed by the name of the macro and then the token sequence it should be an abbreviation for, which is variously referred to as the macro's body, expansion or replacement list. 
For example,

     #define BUFFER_SIZE 1024
defines a macro named BUFFER_SIZE as an abbreviation for the token 1024. If somewhere after this ‘#define’ directive there comes a C statement of the form

     foo = (char *) malloc (BUFFER_SIZE);
then the C preprocessor will recognize and expand the macro BUFFER_SIZE. The C compiler will see the same tokens as it would if you had written

     foo = (char *) malloc (1024);
## By convention, macro names are written in uppercase


# Macro Arguments
Function-like macros can take arguments, just like true functions. To define a macro that uses arguments, you insert parameters between the pair of parentheses in the macro definition that make the macro function-like. The parameters must be valid C identifiers, separated by commas and optionally whitespace.

To invoke a macro that takes arguments, you write the name of the macro followed by a list of actual arguments in parentheses, separated by commas. 
As an example, here is a macro that computes the minimum of two numeric values, as it is defined in many C programs, and some uses.

     #define min(X, Y)  ((X) < (Y) ? (X) : (Y))
       x = min(a, b);          ==>  x = ((a) < (b) ? (a) : (b));
       y = min(1, 2);          ==>  y = ((1) < (2) ? (1) : (2));
       z = min(a + 28, *p);    ==>  z = ((a + 28) < (*p) ? (a + 28) : (*p));

## C Preprocessor

its not part of the compiler but it is a step executed befor the source code is compiled

### Preprocessor directive : eg. #define #ifdef

they begin with the pound symbol.






# C - Function pointers
## Key points
	-What are function pointers and how to use them
	-What does a function pointer exactly hold
	-Where does a function pointer point to in the virtual memory

## Following is a simple example that shows declaration and function call using function pointer.


#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
  
int main()
{
    // fun_ptr is a pointer to function fun() 
    void (*fun_ptr)(int) = &fun;
  
    /* The above line is equivalent of following two
       void (*fun_ptr)(int);
       fun_ptr = &fun; 
    */
  
    // Invoking fun() using fun_ptr
    (*fun_ptr)(10);
  
    return 0;
}

1)A function pointer points to code
2)Unlike normal pointers, we do not allocate de-allocate memory using function pointers.
3)A function’s name can also be used to get functions’ address. For example, in the below program, we have removed address operator ‘&’ in assignment. We have also changed function call by removing *, the program still works.

#include <stdio.h>
// A normal function with an int parameter
// and void return type
void fun(int a)
{
    printf("Value of a is %d\n", a);
}
  
int main()
{ 
    void (*fun_ptr)(int) = fun;  // & removed
  
    fun_ptr(10);  // * removed
  
    return 0;
}

4)we can have an array of function pointers.

 
5) Function pointer can be used in place of switch case. 
For example, in below program, user is asked for a choice between 0 and 2 to do different tasks.
#include <stdio.h>
void add(int a, int b)
{
    printf("Addition is %d\n", a+b);
}
void subtract(int a, int b)
{
    printf("Subtraction is %d\n", a-b);
}
void multiply(int a, int b)
{
    printf("Multiplication is %d\n", a*b);
}
  
int main()
{
    // fun_ptr_arr is an array of function pointers
    void (*fun_ptr_arr[])(int, int) = {add, subtract, multiply};
    unsigned int ch, a = 15, b = 10;
  
    printf("Enter Choice: 0 for add, 1 for subtract and 2 "
            "for multiply\n");
    scanf("%d", &ch);
  
    if (ch > 2) return 0;
  
    (*fun_ptr_arr[ch])(a, b);
  
    return 0;
}

6) Like normal data pointers, a function pointer can be passed as an argument and can also be returned from a function.
For example, consider the following C program where wrapper() receives a void fun() as parameter and calls the passed function.
// A simple C program to show function pointers as parameter
#include <stdio.h>

// Two simple functions
void fun1() { printf("Fun1\n"); }
void fun2() { printf("Fun2\n"); }

// A function that receives a simple function
// as parameter and calls the function
void wrapper(void (*fun)())
{
	fun();
}

int main()
{
	wrapper(fun1);
	wrapper(fun2);
	return 0;
}

##  Their declaration is easy: write the declaration as it would be for the function, say

### int func(int a, float b);
and simply put brackets around the name and a * in front of it: that declares the pointer. Because of precedence, if you don't parenthesize the name, you declare a function returning a pointer:

/* function returning pointer to int */
int *func(int a, float b);

/* pointer to function returning int */
int (*func)(int a, float b);


##  You can call the function using one of two forms:

(*func)(1,2);
/* or */
func(1,2);































