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
\a Bell beep.
\b back space(brings cursor one position left)
\f form feed(ejects current paper from printer and loads a new one)
\n New line character.
\r carriage return(brings cursor to the beginning of the line)
\t Horizontal tab.
\v Vertical tab.
\\ To print backslash.
\” To print double quotations.
\’ To print single quotations.
\? To print question mark.
\0 Null (End of string)
# Data Types – in C
C language is rich in data types. There are 4 classes of data types:
1. Primary data types (int, float, char)
    - integer
    - real
    - character 
2. User defined data types (enumerator, typedef)
3. Derived data types (array, function, pointers, structure, union)
     - # Array is a collection of similar data items or elements.
           Or we can say that array is a collection of homogeneous data elements stored continuously under a single name.
           ## Need for an array –
            When the number of variables of same type and nature are more then it is difficult to handle them. So we need an array. Let us understand the use of array with an example:
               int i,a;
                for(i=1;i<=5;i++)
                {
                printf(“Enter the no.”);
                scanf(“%d”,&a);
                }
            In the above program as soon as the new value is assigned to the variable a the old value is lost. Thus all the variables that we have used so far are not able to hold more than
            one value at a time. But sometimes we wish to store more than one value for a variable.
            For example if we wish to arrange the marks of 10 students in ascending order.
            **There are two ways for it:**
            - (i) Use of 10 different variables so that each variable can store
            - (ii) Use a single variable which can store the marks of all students.
           Obviously the second option looks better because it is easier to handle them. A single variable which can store more than one value at a time is called an Array. 
           # Array declaration:-
             int arr[6];
             Here arr is the name of the array, int is the data type of values which the array
            will store, 6 is the size of array and [] are called as subscript operator. The size of
            array must be arr constant. The most important thing is that all the values in the array
            should be of **the same type**
            ![arr](img/arr.png)
             10, 20, 30, 40, 50 are the elements of the array. To use the elements of the array we refer to the **index**. The array **index starts from 0** i.e. if the size of the array is 6,
            so the indices of the array will be from 0 to 5
            # In the definition we also said that the elements of the array are stored continuously, i.e. if the element at 0 index has address 100 then the next elements will
            have addresses 102, 104, 106, 108, 110 if the array is an integer array because an
            **integer occupies only 2 bytes**. But if it was a float array the addresses will have been
            100, 104, 108, 112, 116, 120 since a **float number occupies 4 bytes**.
            ## Array Initialize:
            int a[5]; /*This array will contain garbage values*/
            int a[5] = {10,20,30,40,50}; /*This array will contain 10,20,30,40,50 values*/
            int a[5] = {0,0,0,0,0}; /*This array will contain 0,0,0,0,0 values*/
            int a[5] = {0}; /*This array will contain 0,0,0,0,0 values*/
            int a[5] = {1}; /*This array will contain 1,0,0,0,0 values*/
            int a[5] = {10, , 30}; /*This array will contain 10,0,30,0,0 values*/
            int a[ ] = {10,20,30}; /*The size of this array will be assumed as 3*/
            int a[3] = {10,20,30,40}; /*Too many initializes error.*/
            static int a[5]; /*This array will contain 0,0,0,0,0 values*/
            # summary and note:
                - If the size of the array is missing but the values are given then the size of the
                array formed will be equal to the number of initializes.
                - If the number of initializes is more than the size of the array then the error of
                too many initializes is given.
            # Limitations of array in C -
            1. The array formed will be homogeneous. That is in an integer array only
            integer values can be stored, while in a float array only floating values and
            character array can have only characters. Thus no array can have values
            of two data types.
            2. While declaring the array passing size of the array is compulsory, and the
            size(indexes) must be a **integer type**. Thus there is either shortage or wastage of
            memory.
            3. Insertion or deletion of elements in an array will require shifting.
                  
     - pointer
     - structure
     - union
     - Enum
4. Empty data sets. (void)

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