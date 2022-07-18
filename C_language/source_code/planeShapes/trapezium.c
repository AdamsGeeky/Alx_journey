/* C CODE To calculate  Area of trapezium!
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 15, 2022 
*/
#include<stdio.h>
void main()
{
    float Area, ParallelSideA,ParallelSideB,Height;
    printf("\t \t Let Calculate Area trapezium");
    printf("\n Enter parallel side A := ");
    scanf("%f", &ParallelSideA);
    printf("\n Enter parallel side B := ");
    scanf("%f", &ParallelSideB);
    printf("\n Enter Height := ");
    scanf("%f", &Height);
        Area = 0.5*(ParallelSideA + ParallelSideB) * Height ;
        printf("\t there for Area of Trapezium : = %2.2f \n",Area);
}