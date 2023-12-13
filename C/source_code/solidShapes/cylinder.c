/* C CODE To calculate  Area and Volume of cylinder !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 18, 2022 
*/
#include <stdio.h>
int main(){
    float radius,Height,area,volume;
    printf("Enter the radius of a cylinder :- ");
    scanf("%f",&radius);
    printf("Enter the Height of a cylinder  :- ");
    scanf("%f",&Height);
    area = 3.142 * radius * ( radius + Height);
    volume = (3.142 * radius * radius * Height )/ 3;
    printf("Area of cylinder :- %2.2f\n",area);
    printf("Volume of cylinder :- %2.2f\n",volume);
    return 0;
}