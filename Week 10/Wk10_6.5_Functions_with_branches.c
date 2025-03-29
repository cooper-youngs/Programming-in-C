/*
Define a function FindMenuCost() that takes two integer parameters as the menu chosen and the number of people attending a dinner, and returns the menu's cost per person as an integer. The cost of the menu is returned as follows:

Cost per person
Menu	≤ 50 people	    51 - 105 people	    > 105 people
1	        60	               55	              45
2	        75	               65	              40
3	        65	               60	              50

If menu number is not in the above table, return 135.

Ex: If the input is 1 45, then the output is:
60

*/

#include <stdio.h>

int FindMenuCost( int menu, int numPeople) {
   
   int costPer; 
   
   switch (menu) {
      case 1:
         if (numPeople <= 50) {
            costPer = 60;
         }
         else if (numPeople <= 105) {
            costPer = 55;
         }
         else {
            costPer = 45;
         }
         break;
      case 2:
         if (numPeople <= 50) {
            costPer = 75;
         }
         else if (numPeople <= 105) {
            costPer = 65;
         }
         else {
            costPer = 40;
         }
         break;
      case 3:
         if (numPeople <= 50) {
            costPer = 65;
         }
         else if (numPeople <= 105) {
            costPer = 60;
         }
         else {
            costPer = 50;
         }
         break;
      default:
         costPer = 135;
         break;
   }
    return costPer;
}
   
  
      
      
      
      
            

int main(void) {
   int menu;
   int numGuests;

   scanf("%d", &menu);
   scanf("%d", &numGuests);

   printf("%d\n", FindMenuCost(menu, numGuests));

   return 0;
}