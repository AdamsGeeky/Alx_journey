/* C CODE To calculate perimeter and Area of Rectangle !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 13, 2022 
*/

#include<stdio.h>
void main()
{
    float Area, length, breadth,perimeter;
    printf("\t \t Let Calculate Area and perimeter of Rectangle");
    printf("\n Enter length of Rectangle := ");
    scanf("%f", &length);
    printf("\n Enter breadth of Rectangle := ");
    scanf("%f",&breadth);
    Area =  length * breadth;
    perimeter = 2 * ( length + breadth );
    printf("\t the Area of a Rectangle : = %2.2f \n\t\t and perimeter :=  %2.2f \n",Area,perimeter);
}