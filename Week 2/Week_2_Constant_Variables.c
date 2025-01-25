/*Constant Variable: an initialized variable whose value cannot change,
 this can be done by preceding the variable initilizaton with const. 
 The compiler wiil then raise an error if a later statement tries to
  change that variables value. 

Good practice is to name constant variable using all caps and words 
separated by underscores. (to make them more visible) */

/*The cost to ship a package is a flat fee of 75 cents plus 25 cents per 
pound.
1. Declare a const named CENTS_PER_POUND and initialize with 25.

2. Get the shipping weight from user input storing the weight into 
shipWeightPounds. (Remember %d is used to read in an integer from the user.)

3. Using FLAT_FEE_CENTS and CENTS_PER_POUND constants, assign 
shipCostCents with the cost of shipping a package weighing 
shipWeightPounds.*/

#include <stdio.h>

int main(void) {
   int shipWeightPounds;
   int shipCostCents = 0;
   const int FLAT_FEE_CENTS = 75;

//initialize cents per pound as integer constant value of 25
   const int CENTS_PER_POUND = 25;

//get shipping weight from user, thought about using a double var here
//but it did not specify.  
   scanf("%d", &shipWeightPounds);
   
//equation to calculate shipping cost 
   shipCostCents = FLAT_FEE_CENTS + (CENTS_PER_POUND * shipWeightPounds);

   printf("Weight(lb): %d, Flat fee(cents): %d, Cents per pound: %d\nShipping cost(cents): %d\n",
          shipWeightPounds, FLAT_FEE_CENTS, CENTS_PER_POUND, shipCostCents);

   return 0;