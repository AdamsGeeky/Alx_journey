---
sidebar_position: 11
---
## What is an Array in C ?
An array is essentially a collection of elements. The data types for all elements must be the same and store at the contiguous memory location. You must remember that the element type shall be complete whenever the array type is specified.

*For example, if you want to store 5 integers, you can create an array for it.*

Unlike some other languages, in C, all elements of an array have the same type. To declare an array we use this syntax:
```c
type var_name[number_of_elements];

/* array of 5 integers */
int arr[5];
```

Each element of the array is individually referenced by using an index. We can easily access the elements using an index in square brackets. The index of the array always starts with 0. It means if you want to get the first element of the array then the index must be 0.

## Why do we need arrays?
To understand why do we need arrays to let’s consider the situation, suppose you need to get 10 student’s age information and store it for some calculation. Also, we need to send the calculation result and age information to the server.

Since age (in the year) is an integer type, we can store it something like below,
```c
int ag1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
```

If we use the integer variable like the above declaration, it will be very difficult to manipulate the data and send it to the server. The situation becomes more worst and difficult when the number of students goes beyond 100.

We can resolve this issue easily with the help of an array where we just need to create an array of size n, n is the number of students. For example, if you want to store and manipulate the age of 100 students you need to create an array of size 100. Here the idea of an array is to represent many instances by one variable (One derived type).
```c
/Integer array of size 100
int ages[100];
```
## How to initialize an array?
We can initialize an array while declaring it. Like below example,
```c
//Declaring and initializing an array
int Data[10] = {0,1,2,3,55,6,7,8,8,9};
```

If you will not give the array size at the time of initialization, array size will be determined by the compiler. However, the compiler knows its size is 10 as we are initializing it with 10 elements.

If an array of unknown size is initialized, its size is determined by the largest indexed element with an explicit initializer. The array type is completed at the end of its initializer list.

## How to Access Array Elements ?
using [**for loops**](Loops%20Statement.md)
At the beginning of this blog post, I have already said each element of the array is individually referenced by using an index and we can easily access the elements using their index. Let’s consider an example for better understanding
Suppose you declared an array of 5 integers. The index of the array always starts with 0, so you can see below the image Data[0] is the first element of the array, the second element is Data[1], and so on
**If the size of an array is n, to access the last element, the (n-1) index is used.**

## Change Value of Array elements:
We can also assign a single value to the array using the subscript and index. Let’s consider the below example
```c
/* Array of 5 integers */
int Data[5] ={1,2,3,4,5};

/* Assign 7 to third position */

Data[ 2 ] = 7;
```
The above statement assigns 7 to the 3rd element in the array.

## Getting input from the user:
Here we learn how to take input from the user and store it in an array element. Let’s consider an example where we get the integer value from the user and store it in the array using the loop. In the case of an array, we know the exact size of the array, so we should use the “for loop“. It will get 5 elements from the user and print them.
```c
#include<stdio.h>
int main()
{
        int arr[5];
        int i;
        //for getting 5 elements from user
        for(i = 0; i < 5; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Print array elements\n");
        //printing all 5 elements
        for(i = 0; i < 5; i++)
        {
            printf("%d\n",arr[i]);
        }
        return 0;
}
```

## Different types of Array in C:
There are several variations of array types: 
