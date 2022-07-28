/* C CODE To Program  swap with addition and subtraction !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 23, 2022 
*/
#include <stdio.h>
int main(){
     int containerA,containerB,containerC;
   printf("\t \t *********** normal input ************ \n\n");
   printf("Enter the content of a Container A := ");
   scanf("%d",&containerA);
   printf("Enter the content of a Container B := ");
   scanf("%d",&containerB);
   printf("Enter the content of a Container C := ");
   scanf("%d",&containerC);
   //swapping here 
   containerA = containerA + containerB;
   containerB = containerA - containerB;
   containerA = containerA - containerB;
   // swap c 
   containerB = containerB + containerC;
   containerC = containerB - containerC;
   containerB = containerB - containerC;
    //end
   printf("\t \t *********** swapping of container ************ \n\n");
   printf("therefore now content of container A is = : %d\n", containerA);
   printf("And also  the content of container B is = : %d\n", containerB);
   printf("And also  the content of container C is = : %d\n", containerC);
   //swap back
   containerB = containerA - containerB;
   containerA = containerA - containerB;
   containerB = containerA + containerB;
   // swap c back
   containerC = containerB - containerC;
   containerB = containerB - containerC;
   containerC = containerB + containerC;
   //end
   printf("\t \t *********** swap back ************ \n\n");
   printf("therefore now content of container A is = : %d\n", containerA);
   printf("And also  the content of container B is = : %d\n", containerB);
   printf("And also  the content of container C is = : %d\n", containerC);

 return 0;
}
