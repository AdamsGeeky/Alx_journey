---
sidebar_position: 13
---

In C programming, a string is a sequence of characters terminated with a null character \0. For example:
```c
char c[] = "c string";
```
When the compiler encounters a sequence of characters enclosed in the double quotation marks, it appends a null character \0 at the end by default.

## How to declare a string?
Here's how you can declare strings:
```c
char s[5];
```

## How to initialize strings?

You can initialize strings in a number of ways.
```c
char c[] = "abcd";

char c[50] = "abcd";

char c[] = {'a', 'b', 'c', 'd', '\0'};

char c[5] = {'a', 'b', 'c', 'd', '\0'};
```

## Assigning Values to Strings
Arrays and strings are second-class citizens in C; they do not support the assignment operator once it is declared. For example,
```c
char c[100];
c = "C programming";  // Error! array type is not assignable.
```
Note: Use the **strcpy()** function to copy the string instead.

Read String from the user
You can use the **scanf()** function to read a string.

The **scanf()** function reads the sequence of characters until it encounters whitespace (space, newline, tab, etc.).

Example 1: scanf() to read a string
```c
#include <stdio.h>
int main()
{
    char name[20];
    printf("Enter name: ");
    scanf("%s", name);
    printf("Your name is %s.", name);
    return 0;
}
```

Output
```console
Enter name: Adamu Muhammad
Your name is Adamu.
```
Even though **Adamu muhammad** was entered in the above program, only **Adamu** was stored in the name string. It's because there was a space after Adamu.

Also notice that we have used the code name instead of &name with scanf().
```c
scanf("%s", name);
```
This is because name is a char array, and we know that array names decay to pointers in C.

Thus, the name in scanf() already points to the address of the first element in the string, which is why we don't need to use &.

## How to read a line of text?
You can use the fgets() function to read a line of string. And, you can use puts() to display the string.

Example 2: fgets() and puts()
```c
#include <stdio.h>
int main()
{
    char name[30];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);  // read string
    printf("Name: ");
    puts(name);    // display string
    return 0;
}
```
Output
```console
Enter name: ADAMU MUHAMMAD
Name: ADAMU MUHAMMAD
```
Here, we have used fgets() function to read a string from the user.
```c
fgets(name, sizeof(name), stdlin); // read string
```
The sizeof(name) results to 30. Hence, we can take a maximum of 30 characters as input which is the size of the name string.

To print the string, we have used puts(name);

Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

It's because gets() allows you to input any length of characters. Hence, there might be a buffer overflow.

## Passing Strings to Functions
Strings can be passed to a function in a similar way as arrays. Learn more about passing arrays to a function.

Example 3: Passing string to a Function
```C
#include <stdio.h>
void displayString(char str[]);

int main()
{
    char str[50];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);             
    displayString(str);     // Passing string to a function.    
    return 0;
}
void displayString(char str[])
{
    printf("String Output: ");
    puts(str);
}
```
## Strings and Pointers
Similar like arrays, string names are "decayed" to pointers. Hence, you can use pointers to manipulate elements of the string. We recommended you to check C Arrays and Pointers before you check this example.

Example 4: Strings and Pointers
```C
#include <stdio.h>

int main(void) {
  char name[] = "Harry Potter";

  printf("%c", *name);     // Output: H
  printf("%c", *(name+1));   // Output: a
  printf("%c", *(name+7));   // Output: o

  char *namePtr;

  namePtr = name;
  printf("%c", *namePtr);     // Output: H
  printf("%c", *(namePtr+1));   // Output: a
  printf("%c", *(namePtr+7));   // Output: o
}
```
## Commonly Used String Functions
strlen() - calculates the length of a string
strcpy() - copies a string to another
strcmp() - compares two strings
strcat() - concatenates two strings