/* C CODE To Program  swap two integer !
   Author :- ADAMU MUHAMMED MUHAMMAD aka AdamsGeeky
   Date :- jul 19, 2022 
*/
#include <stdio.h>
int main(){
   int containerA,containerB,tempContainer;
   printf("\t \t *********** normal input ************ \n\n");
   printf("Enter the content of a Container A := ");
   scanf("%d",&containerA);
   printf("Enter the content of a Container B := ");
   scanf("%d",&containerB);
    // swaping 
     printf("\t \t *********** swaping of container ************ \n\n");
     tempContainer = containerA;
    containerA = containerB;
    containerB = tempContainer;
    printf("therefore now content of container A is = : %d\n", containerA);
    printf("And also  the content of container B is = : %d\n", containerB);
    printf("\n\n \t\t\t\t\t end **\n\n"); 
    // swap back 
     tempContainer = containerB;
     containerB = containerA;
     containerA = tempContainer;
     printf("\t \t *********** swap back ************ \n\n");
     printf("therefore now container A content is = : %d\n", containerA);
     printf("and also the content of container B is = : %d\n", containerB);
    
    return 0;
}