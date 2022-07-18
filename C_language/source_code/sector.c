/* C CODE To calculate  Area of Sector circle !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 14, 2022 
*/
#include<stdio.h>
void main()
{
    float Area, Radius, Angle;
    printf("\t \t Let Calculate Area  of Circle");
    printf("\n Enter Radius of Circle := ");
    scanf("%f", &Radius);
    printf("\n Enter Angle of Sector := ");
    scanf("%f", &Angle);
    Area = (Angle / 360) * ( 3.142 * Radius * Radius );
    printf("the Area of Circle : = %2.2f \n",Area);
}