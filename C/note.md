# What is C?
    C is a programming language used to write a program. Programs are the set of
    instructions given by a programmer to the computer in high level language. C uses a compiler to translate the high level program into machine code before executing any instructions. 
  ## middle level language
    becouse of it ability to:
  1. Direct Memory Access through Pointers
  2. Bit Manipulation Using Bitwise Operator
  3. Writing Assembly Code within C code
# language Translator in c
  the translation in c follows a four step before it is execute by machine
1. preprocessor
2. compiler
3. Assembler
4. linker/loader

5. Compiler is itself a computer program.
   - compilation with gcc
      *gcc sourcefileName  -o ../compiler_output/outputFileName*
6. Interpreter  
7. Assembler.

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

# STORY OF HEADER FILES -
Header files contain definitions of functions and variables which can be
incorporated into any C program by using the pre-processor #include statement.
Standard header files are provided with each compiler, and cover a range of areas,
string handling, mathematical, data conversion, printing and reading of variables.
To use any of the standard functions, the appropriate header file should be
included. This is done at the beginning of the C source file.
All header files have the extension .h and generally reside in the
### /include subdirectory.
- ## #include <stdio.h>
- ## #include "mydecls.h"
The use of angle brackets <> informs the compiler to search the compilers
include directory for the specified file. The use of the double quotes "" around the
filename inform the compiler to search in the current directory for the specified file.
# Format Specifiers
   defined the type of Data to be printed on the standard output(Screen)
   you need to use format specifiers whether your are printing out to 
   the screen with printf() or accepting input with scanf() 
   ## some of the format specifiers in C
   | **specifiers**|     **excepted data**  |
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
# Escape Sequences
  are used to format the out put or space between the charecter

# constant in C
 there are two types of constant in c programming language
 1. primary constant
  - integer
  - real
  - character 
 2. Secondary constant
  - Array
  - pointer
  - structure
  - union
  - Enum
# Data types in C
1. int = integer ... -1 0 1 ...
2. float = Real a decimal number 2.4 ... 7.1
3. char = character 'a' 'A' ... 'z' 'Z'

***
# variable
  variable declaration 
  *dataType variableName = initialValue*
  ## naming conviction
  1. must indicate what value it store
  2. ideally should be assigned some value at the time of declaration
  3. must not contain any special character
  4. must start with letter or underscore
  5. must not be a keyword   
   ## Examples
   |  **Valid**   |  **Invalid**  |
   |:------------:|:-------------:|
   |int roll_num  | int roll-num  |
   |float piValue | float 3.142   |
   | char o       | char 0        |
   |int _superKul | int if        |

# Operators in C
- Arithmetic operators
  1. + addition
  2. - subtraction
  3. * multiplication
  4. / division
  5. % modular division
- Increment and Decrement operators
- Assignment operators
  1. = 
  2. += 
  3. -=
  4. *=
- Relational operators
- Logical Operators
- Conditional operators
- Bitwise operators
- special operators