/* C CODE To calculate  Volume of prism !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 19, 2022 
*/
#include <stdio.h>
int main(){
    float Height,baseArea,volume;
    printf("Enter the height of prism := ");
    scanf("%f",&Height);
    printf("Enter the base Area of prism := ");
    scanf("%f",&baseArea);
    volume = baseArea * Height;
    printf("Volume of prism := %2.2f\n",volume);
    
    return 0;
}