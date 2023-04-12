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








































