/* C CODE To calculate  Area and Volume of cone !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 18, 2022 
*/
#include <stdio.h>
int main(){
    float radius,slantHeight,Height,area,volume;
    printf("Enter the radius of cone :- ");
    scanf("%f",&radius);
    printf("Enter the slant height of cone :- ");
    scanf("%f",&slantHeight);
    area = 3.142 * radius * ( radius + slantHeight);
    volume = (3.142 * radius * radius * slantHeight )/ 3;
    printf("Area of cone is :- %2.2f\n",area);
    printf("Volume of cone is :- %2.2f\n",volume);
    return 0;
}