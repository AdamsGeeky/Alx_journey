---
sidebar_position: 10
---

```c
#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int size = 0;
    printf("Enter the size = ");
    scanf("%u",&size);
    for(x=(size/2); x<=size; x+=2)
    {
        for(y=1; y<(size-x); y+=2)
        {
            printf(" ");
        }
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        for(y=1; y<=(size-x); ++y)
        {
            printf(" ");
        }
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
    for(x=size; x>=1; --x)
    {
        for(y=x; y<size; ++y)
        {
            printf(" ");
        }
        for(y=1; y<=(x*2)-1; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
```

```c
#include <stdio.h>
int main()
{
    int x = 0,y = 0;
    unsigned int size = 0;
    char name[50] = {0};
    unsigned int len = 0;
    printf("Enter the size = ");
    scanf("%u",&size);
    fflush(stdin);
    //Ask name
    printf("Enter the size = ");
    fgets(name,size,stdin);
    len = strlen(name);
    for(x=(size/2); x<=size; x+=2)
    {
        for(y=1; y<(size-x); y+=2)
        {
            printf(" ");
        }
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        for(y=1; y<=(size-x); ++y)
        {
            printf(" ");
        }
        for(y=1; y<=x; ++y)
        {
            printf("*");
        }
        printf("\n");
    }
    for(x=size; x>=1; --x)
    {
        for(y=x; y<size; ++y)
        {
            printf(" ");
        }
        if(x == size)
        {
            for(y=1; y<=((size * 2)-len)/2; ++y)
            {
                printf("*");
            }
            fputs(name,stdout);
            for(y=((size * 2)-len)/2; y< size; ++y)
            {
                printf("*");
            }
        }
        else
        {
            for(y=1; y<=(x*2)-1; ++y)
            {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
```

The pattern contains N rows and each row contains N-x + 1 columns (where x is the current row number). So to print hollow inverted right triangle star patterns in C inner loop print star for first or last column or last row otherwise print space.
```c
for(y=x; y<= rows; ++y)
{
    if((x==1) || (y==x) || (y==rows))
    {
        //Print star
        printf("*");
    }
    else
    {
        //Print space
        printf(" ");
    }
}
```