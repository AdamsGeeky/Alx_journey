/*
* Program to evaluate face values.
* Date: Aug 13, 2022
* Author: ADAMU M. MUHAMMAD (AdasGeeky)
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
  char card_name[3];
  puts("Enter the card_name: ");
  scanf("%2s", card_name);
  int val = 0;
  if (card_name[0] == 'k' || 'K')
  {
    val = 10;
  }else if (card_name[0]== 'q' || 'Q')
  {
    val = 10;
  }else if (card_name[0]== 'j' || 'J')
  {
    val = 10;
  }else if (card_name[0]== 'a' || 'A')
  {
    val = 11;
  }else
  {
    val = atoi(card_name[0]);
  }
  printf("The card value is: %i\n", val);
   
    return 0;
}