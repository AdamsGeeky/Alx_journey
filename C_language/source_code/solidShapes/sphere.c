/* C CODE To calculate  Volume of sphere!
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 19, 2022 
*/
#include <stdio.h>
int main(){
    float radius,Area,volume;
    printf("Enter the radius of sphere := ");
    scanf("%f",&radius);
    Area = 4 * 3.142 * radius * radius; 
    volume = (4/3) * 3.142 * radius * radius * radius;
    printf("Area of sphere := %2.2f\n",Area);
    printf("Volume of sphere := %2.2f\n",volume);
    
    return 0;
}