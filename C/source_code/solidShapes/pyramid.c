/* C CODE To calculate  Volume of pyramid!
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 19, 2022 
*/
#include <stdio.h>
int main(){
    float Height,baseArea,volume;
    printf("Enter the height of pyramid := ");
    scanf("%f",&Height);
    printf("Enter the base Area of pyramid := ");
    scanf("%f",&baseArea);
    volume = (baseArea * Height)/3;
    printf("Volume of prism := %2.2f\n",volume);
        return 0;
}