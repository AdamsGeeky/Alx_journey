/* C CODE To calculate  Area of circle !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 14, 2022 
*/
#include<stdio.h>
void main()
{
   float Area, Radius;
    printf("\t \t Let Calculate Area Sector  of Circle");
    printf("\n Enter Radius of Circle := ");
    scanf("%f", &Radius);
    Area = 3.142 * Radius * Radius;
    printf("the Area of  Circle  : = %2.2f \n",Area);
}