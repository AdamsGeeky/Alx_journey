/* C CODE To calculate  perimeter and Area square!
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 15, 2022 
*/
#include<stdio.h>
void main()
{
    float Area, Side, Perimeter;
    printf("\t \t Let Calculate Area and perimeter of Square");
    printf("\n Enter Side of Square ");
    scanf("%f", &Side);
    Area = Side * Side;
    Perimeter = 4 * Side;

    printf("the Perimeter of a Square : = %2.2f \n",Perimeter);
    printf("\t And its  Area : = %2.2f \n",Area);
}