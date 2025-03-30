/*
Array benefitsArray has NUM_BENEFITS integers read from input. Array halfArray has half the size of benefitsArray. 
Write a loop that iterates through halfArray and assigns each element in halfArray with the corresponding element 
in the second half of benefitsArray.

200 30 40 170 180 120 90 100 70 110
then the output is:

Original benefits: 200 30 40 170 180 120 90 100 70 110 
Second half: 120 90 100 70 110 
*/

#include <stdio.h>

int main(void) {
   const int NUM_BENEFITS = 10;
   int benefitsArray[NUM_BENEFITS];
   int halfArray[NUM_BENEFITS / 2];
   int i;

   for (i = 0; i < NUM_BENEFITS; ++i) {
      scanf("%d", &(benefitsArray[i]));
   }
   
   for (i = 0; i < (NUM_BENEFITS / 2); ++i) {
      halfArray[i] = benefitsArray[i + (NUM_BENEFITS / 2) ];
}
   printf("Original benefits: ");
   for (i = 0; i < NUM_BENEFITS; ++i) {
      printf("%d ", benefitsArray[i]);
   }
   printf("\n");

   printf("Second half: ");      
   for (i = 0; i < NUM_BENEFITS / 2; ++i) {
      printf("%d ", halfArray[i]);
   }
   printf("\n");

   return 0;
}