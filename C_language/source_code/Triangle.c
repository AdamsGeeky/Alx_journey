/* C CODE To calculate  Area of Triangle !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 13, 2022 
*/
#include<stdio.h>
void main()
{
    float Area, Base, Height;
    printf("\t \t Let Calculate Area  of Triangle");
    printf("\n Enter Base of Triangle");
    scanf("%f", &Base);
    printf("\n Enter Height of Triangle");
    scanf("%f",&Height);
    Area = 0.5 * Base * Height;
    printf("the Area of a Triangle : = %2.2f \n",Area);
}