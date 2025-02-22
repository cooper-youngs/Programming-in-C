/*
Write a program with total change amount as an integer input, and output the change using the fewest coins, 
one coin type per line. The coin types are Dollars, Quarters, Dimes, Nickels, and Pennies. 
Use singular and plural coin names as appropriate, like 1 Penny vs. 2 Pennies.
Do not print dollar,quarter,dime,nickel, penny if they are 0
*/


#include <stdio.h>

int main(void) {

   int totalChange;
   
   int dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;

   //printf("Please enter total change as an integer:");
    scanf("%d", &totalChange);

    if (totalChange == 0) {
        printf("No change\n");
    }
    else {

    

    dollars = totalChange / 100;
    totalChange = totalChange % 100;

//if there is less than 25 cents left, int division will return 0, modulo will return whatever the number is (10 % 25 = 10)
    quarters = totalChange / 25;
    totalChange = totalChange % 25;

    dimes = totalChange / 10;
    totalChange = totalChange % 10;

    nickels = totalChange / 5;
    totalChange = totalChange % 5;

    pennies = totalChange;

    if (dollars > 0) {
    printf("%d %s\n", dollars, (dollars == 1)? "Dollar" : "Dollars");
    }
    if (quarters > 0){
    printf("%d %s\n", quarters, (quarters == 1)? "Quarter" : "Quarters");
    }
    if (dimes > 0) {
    printf("%d %s\n", dimes, (dimes == 1)? "Dime" : "Dimes");
    }
    if (nickels > 0) {
    printf("%d %s\n", nickels, (nickels == 1)? "Nickel" : "Nickels");
    }
    if (pennies > 0) {
    printf("%d %s\n", pennies, (pennies == 1)? "Penny" : "Pennies");
    }
    }


   return 0;
}