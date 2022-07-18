/* C CODE To calculate  Area of parallelogram
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 15, 2022 
*/
#include<stdio.h>
void main()
{
    float Area, Base, Height;
    printf("\t \t Let Calculate perimeter of parallelogram ");
    printf("\n Enter Base := ");
    scanf("%f", &Base);
    printf("\n Enter Height := ");
    scanf("%f",&Height);
    Area =  Base * Height;
    printf("the perimeter of a parallelogram : = %2.2f \n",Area);
}