/* C CODE To calculate  Area and Volume of cuboid !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 18, 2022 
*/
#include <stdio.h>
int main(){
    float length,breadth,height,area,volume;
    printf("Enter the length  cuboid :- ");
    scanf("%f",&length);
    printf("Enter the breath  cuboid :- ");
    scanf("%f",&breadth);
    printf("Enter the height  cuboid:- ");
    scanf("%f",&height);
    area = 2 * ((length*breadth) + (breadth*height) + (length*height));
    volume = length * breadth * height;
    printf("Area of cube is :- %2.2f\n",area);
    printf("Volume of cube is :- %2.2f\n",volume);
    return 0;
}