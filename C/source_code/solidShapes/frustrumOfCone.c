/* C CODE To calculate  Area and Volume of frustum of cone !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 19, 2022 
*/
#include <stdio.h>
int main(){
    float radius,radii,side,Height,area,volume;
    printf("Enter the radius of a frustum := ");
    scanf("%f",&radius);
    printf("Enter the radii of a frustum := ");
    scanf("%f",&radii);
    printf("Enter the side of a frustum := ");
    scanf("%f",&side);
    printf("Enter the Height of a frustum := ");
    scanf("%f",&Height);
    area = 3.142 * side * ( radius + radii);
    volume = 3.142 * Height * ((radii*radii*radii - radius*radius*radius)/(radii - radius));
    printf("Area of frustum := %2.2f\n",area);
    printf("Volume of frustum := %2.2f\n",volume);
    return 0;
}