/*
// Iterating through myArray
for (i = 0; i < numElements; ++i) {
   // Loop body accessing myArray[i]
}

*see example below for out of range index logic error*

int userWeights[3];
int userAge;

userAge = 44;

userWeights[0] = 122;
userWeights[1] = 119;
userWeights[2] = 117;
userWeights[3] = 199; // (Problematic)

// Print userAge

    - This program reads in userAge, then each index is assigned in userWeights, the last assignment (userWeights[3])
    is out of range, this results in overwriting userAge with 199


Given the integer array yearlyPrices with NUM_ELEMENTS elements,
 write a for loop to assign the second half of yearlyPrices with the integers read from input, in reverse order.

Ex: If the input is 63 92, then the output is:
0 0 92 63 
*/

#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 4;
   int yearlyPrices[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      yearlyPrices[i] = 0;
   }

   for (i = (NUM_ELEMENTS - 1); i > ((NUM_ELEMENTS / 2) - 1); --i) {
      scanf("%d", &yearlyPrices[i]); 
   }

   for (i = 0; i < NUM_ELEMENTS; ++i) {
      printf("%d ", yearlyPrices[i]);
   }

   printf("\n");
   
   return 0;
}