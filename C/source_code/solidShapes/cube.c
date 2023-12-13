/* C CODE To calculate  Area and Volume of cube !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 18, 2022 
*/
#include <stdio.h>
int main(){
    float edge,area,volume;
    printf("Enter the Edge of  cube :- ");
    scanf("%f",&edge);
    area = 6 * (edge*edge);
    volume = (edge*edge*edge);
    printf("Area of cube is :- %2.2f\n",area);
    printf("Volume of cube is :- %2.2f\n",volume);
    return 0;
}