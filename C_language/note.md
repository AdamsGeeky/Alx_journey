# What is C?
    C is a programming language used to write a program. Programs are the set of
    instructions given by a programmer to the computer in high level language. C uses a compiler to translate the high level program into machine code before executing any instructions. 
1. Compiler is itself a computer program.
   - compilation with gcc
      *gcc sourcefileName  -o ../compiler_output/outputFileName*
2. Interpreter  
3. Assembler.

***

# program compilation step

# Include a header file to help prototype functions. The puts() function
requires the stdio.h header.
# The include compiler directive adds the header file into your source
code. It’s formatted like this:
# include <file.h>
In this line, file represents the name of the header file. All header files
sport the .h extension, which must be specified with the header file-name in the angle brackets.
# There’s no need to include the same header file more than once in a
source code file.
# Technically, you can include the header file several times. The compiler
doesn’t balk over the duplication, it just keeps adding in the header files
at compile time. That may add unnecessary bulk to the size of the object
code file.

***

# Format Specifiers
   defined the type of Data to be printed on the standard output(Screen)
   you need to use format specifiers whether your are printing out to 
   the screen with printf() or accepting input with scanf() 
   ## some of the format specifiers in C
   | specifiers |         excepted data      |
   |:----------:|:--------------------------:|
   |    %c      |  single character          |
   |    %s      |  a string of character     |
   |    %hi     |  short signed              |
   |    %hu     |  short unsigned            |
   |    %Lf     |  long double               |
   |    %n      |  nothing                   |
   |    %d      |  decimal integer(base 10)  |
   |    %i      |  decimal int               |
   |    %o      |  octal (base 8)            |
   |    %x      |  hexadecimal (base 16)     |
   |    %p      |  an address or pointer     |
   |    %f      |  floating point            |
   |    %u      |  int unsigned float        |
   |    %e      |  floating point            |
   |    %E      |  floating point            |

***