---
sidebar_position: 12
---

## What is a pointer in C?
A pointer is a special variable that stores a memory address. Pointers are used to store the addresses of other **variables** or memory items. The basic difference between the pointers and the simple variable is that the pointers store the addresses rather than values.

  *Pointer stores a memory address*
Because the pointer references a location in memory, so we can access the value of the reference memory location using the pointer, the technique to access the value is known as **dereferencing** the pointer

## Pointer Syntax (Declaration of pointers in C
before using a pointer you have to declare it first. The declaration of a pointer is very important because at the time of declaration you define the capability of the pointer. Every pointer has the data types *pre-defined* or *user-defined* and names followed by an asterisk **(*)**. **Asterisk** is a unary operator.

Pointer Syntax:
```c
Data_Type * Pointer_Name;

char *cPtr // pointer to a character
int *iPtr; // pointer to an integer
float *fPtr; // pointer to float
double *dPtr; // pointer to a double
```

## How to use pointers in C Programming?
I think before understanding how to use the pointers, we should know the *two* important unary operators. These unary operators are indirection operator **( * )** and address of operator **( &)**.

1. **Indirection operator or Dereference Operator (  * )**:
The unary * operator (Asterisk) denotes indirection. With pointers, the indirection operator is used for two things,
    1. To declare a pointer variable 
    2. To access the value stored in the address 

 Let see an example,
```c
//Use of indirection operator in declaration of pointer
int *pointer; 
/*Use of indirection operator to read 
the value of the address pointed by the pointer*/
address = *pointer; 
/*Use of indirection operator to write the 
value to the address pointed by pointer*/
*Pointer = address;
```

The operand of * must be a pointer type and the result of the operation is the value addressed by the operand. If the operand of indirection operator has type ‘‘pointer to type’’, the result of the operation has type ‘‘type’’.

2. **Address of operator ( & )**:
It is also a unary operator and gives the address of the operand. According to the C standard “The operand of the unary & operator shall be either a function designator or an lvalue that designates an object that is not a bit-field and is not declared with the register storage-class specifier”.

 Let see an example,
```c
int data = 0; // declaration  of integer variable
&data // => Give the address of the data
int *pointer ; // declaration  of pointer
&pointer // => Give the address of the pointer
```

## “how to use pointers”.
  So we require mainly three steps to use the pointers in the programs these are mentioned below.

1. Declare a pointer:
```c
// declaration of pointer to int
int  *pointer = NULL; 
```

1.  Assign an address to the pointer:
Let’s take an example.
```c
int* pointer, data;
data = 20;
pointer = &data;
Here, 20 is assigned to the data (integer variable), and the address of data is assigned to the pointer (integer pointer).
```
3.  Access the pointers:
To access the value of the address pointed by the pointers, we use the * operator. For example:
```c
int* pointer, data;
data = 20;
pointer = &data;
printf("%d", *pointer);  // Output: 20
*pointer = 5; //change the value through point
printf("%d", data);  // Output: 5
```

Here, the address of data is assigned to the **pointer** integer pointer. To access the value stored in that address, we used ***pointer**.

Sample C program for better understanding. In the below C program, I am creating an integer pointer **(int_pointer)**, and using this printer I am accessing an integer variable (data).
```c
#include <stdio.h>

/**
* concept: pointer
* Author: ADAMU MUHAMMAD MUHAMMAD aka AdamsGeeky
* Date: sep 19, 2022
*/

int main ()
{
        int  data = 2022;   /* declaration of variable */
        int  *int_pointer = NULL; /* declaration of pointer */
        int_pointer = &data;  /* Assign address of data to the pointer */

        printf("Address of data: %p\n\n", &data);
        /* Address stored in pointer*/
        printf("Address stored in int_pointer: %p\n\n", int_pointer);
        /* Read value from the stored address with help of pointer */
        printf("value of *int_pointer = %d\n\n", *int_pointer );
        /* Assign value to the stored address with help of pointer */
        *int_pointer = 2023;
        /* Again Read value from the stored address with help of pointer */
        printf("New value of *int_pointer = %d\n\n", *int_pointer);
        printf("data = %d\n\n", data);
        
        return 0;
}
```
