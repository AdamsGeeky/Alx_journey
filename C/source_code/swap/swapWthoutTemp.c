/* C CODE To Program  swap with addition and subtraction !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 23, 2022 
*/
#include <stdio.h>
int main(){
     int containerA,containerB;
   printf("\t \t *********** normal input ************ \n\n");
   printf("Enter the content of a Container A := ");
   scanf("%d",&containerA);
   printf("Enter the content of a Container B := ");
   scanf("%d",&containerB);
   //swapping here 
   containerA = containerA + containerB;
   containerB = containerA - containerB;
   containerA = containerA - containerB;
   //end
   printf("\t \t *********** swapping of container ************ \n\n");
   printf("therefore now content of container A is = : %d\n", containerA);
   printf("And also  the content of container B is = : %d\n", containerB);
   //swap back
   containerB = containerA - containerB;
   containerA = containerA - containerB;
   containerB = containerA + containerB;
   //end
   printf("\t \t *********** swap back ************ \n\n");
   printf("therefore now content of container A is = : %d\n", containerA);
   printf("And also  the content of container B is = : %d\n", containerB);

 return 0;
}
