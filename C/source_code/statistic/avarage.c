/* C CODE To Program  average  of N  number !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 23, 2022 
*/
#include<stdio.h>
typedef int wholeNumber;
typedef float decimal;
int main(){
    wholeNumber size, i,j,sum;
    decimal average;
    printf("\t \t Enter the Numbers of Elements \n ");
    scanf("%i",&size);
   //array declaration to store n numbers
   wholeNumber container[size];
printf("Enter the numbers \n");
for(i = 1; i <= size; i++){
       scanf("%i",&container[i]);
};
sum = 0; 
printf("output\n");
for(j = 1; j <= size; j++){
   sum += container[j];
};
//typecasting 
average = (float)sum/size;
printf("the average of numbers : = %.2f\n",average);

return 0;
}