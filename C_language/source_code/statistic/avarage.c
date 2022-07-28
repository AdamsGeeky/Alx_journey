/* C CODE To Program  average  of five three number !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 23, 2022 
*/
#include<stdio.h>
typedef int marks;
int main(){
    marks m1,m2,m3;
    float average;

    printf("Enter first mark := ");
    scanf("%d",&m1);

    printf("Enter second mark := ");
    scanf("%d",&m2);

    printf("Enter third mark := ");
    scanf("%d",&m3);
    // type casting by .0
    average = (m1 + m2 + m3) / 3.0;

    printf("\n \t\t the average of three marks is = %2.2f\n", average);




return 0;
}