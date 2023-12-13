---
sidebar_position: 1
---

C is a powerful general-purpose programming language. It can be used to develop software like operating systems, databases, compilers, and so on. C programming is an excellent language to learn to program for beginners.

C is a powerful general-purpose programming language. It can be used for a wide range of applications from Operating systems like Windows and iOS to software that is used to create 3D movies.

## A programming language is a tool,
and no tool can perform every task unaided. If you're building a house, and I'm teaching you how to use a hammer, and you ask how to assemble rafters and trusses into gables, that's a legitimate question, but the answer has fallen out of the realm of ``How do I use a hammer?'' and into ``How do I build a house?''. In the same way, we'll see that C does not have built-in features to perform every function that we might ever need to do while programming.

## Features of C Programming
## A procedural language
C is a procedural language. This means instructions in the C program are executed step by step.

If you are interested to know how procedural language is different from other forms of programming language like object-oriented, visit differences between procedural and object-oriented languages.

## C programs are fast
C programming allows programmers to directly manipulate computer hardware. This is one of the reasons why C programming is faster in processing than other new languages like Java, Python, etc.

## Standard C programs are portable
"Write once, compile everywhere". This means we can write a standard C program in one system (e.g. Windows) and compile it in another system (e.g. Mac OS) without any change.

## Use of Modularity
C provides various standard libraries. Standard libraries are a section of C code that helps to perform different tasks.

For example, suppose you need to display something on the screen, you can include stdio.h library that allows you to use printf() function.

## Statically typed language
C is a statically types language. This means the type of a variable is checked during the compile time but not in the run-time. Statically typed languages are faster than dynamically typed language in general.

## General-purpose language
Despite being old, C is used in a variety of applications. For example,

- Embedded Systems
- Operating System - Windows, Linux, OSX, Android, iOS
- Databases - PostgreSQL, Oracle, MySQL, MS SQL Server
- Other Uses - Network drivers, Compilers, Print spoolers

## Why should you learn C programming?
If you don't know C, you don't know what you are doing as a programmer. Sure, your application works fine and all. But, if you can't say why while (*s++ = *p++); copies a string, you're programming on a superstition. (Joel Spolsky's words, not mine).

1. You will understand how a computer works
If you know C, you will not only know how your program works but, you will be able to create a mental model of how a computer works (including memory management and allocation).

2. C is the lingua franca of programming
Almost all high-level programming languages like Java, Python, Javascript, etc can interface with C programming. Doesn't matter if the person you are talking with doesn't know C, you can still convey your programming ideas in a way they can understand.

3. Opportunity to work on open source projects
If you know C, you can contribute to large open-source projects that impact hundreds of millions of people. Some of the larger open source projects where C programming is used are Linux, Kernel, Interpreter, Python, SQLite Database, etc.

4. You will find it much easier to learn other programming languages
A lot of popular programming languages are based on C (and C++, considered superset of C programming with OOP features). Hence, if you know C and C++, you will not have any problem switching to another language.

## C Programming Best Practice
Best practices are informal rules which can improve quality and decrease the development time of the software.

Some of the practices mentioned here are valid for all programming languages. However, some are valid only for C programming.

## Be consistent with the formatting
The number of spaces you use in the program doesn't matter in C. However, you shouldn't use a different number of spaces at different places. Also, proper spacing makes the code easier to understand.

Use one statement per line
What's wrong with the following code?
```C
int count; float squareRoot = 10.0; printf("Square root = %f", squareRoot);
```
Actually, the code is perfectly valid. But, wouldn't this be better:

```C
int count;
float squareRoot = 10.0;
printf("Square root = %f", squareRoot);
```

The goal here is to write code that your fellow programmers can understand.

## Naming Convention and Consistency
Give a proper name to variables and functions and be consistent with it. For example,

int a, b:
Here, a and b are two variables. But, it doesn't specify what they represent. However, if you choose names like:

int counter, power;
This will be better to understand.

## Start Habit of Using Comments
Comments are part of codes that the compiler ignores. They can be used to explain what you are trying to achieve in your program. This helps fellow programmers to understand the code.