/* C CODE To Program to insert item at a given position !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- Aug 02, 2022 
*/
#include <stdio.h>
#define SIZE 20
int main()
{
int n,i,a[SIZE],item,pos;
   printf("enter the no. of elements in the array: ");
   scanf("%d",&n);
/*Input in array*/
   for(i=0;i<n;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%d",&a[i]);
   }
    printf("Enter the item and its position of insertion: ");
    scanf("%d %d",&item,&pos);
    pos--; /*Array index starts from 0*/
    for(i=n-1;i>=pos;i--)
      a[i+1]=a[i];  /*insertion*/
      a[pos]=item;   /*Output*/
    for(i=0;i<n+1;i++)
     printf("\n%d",a[i]);

     return 0;
}