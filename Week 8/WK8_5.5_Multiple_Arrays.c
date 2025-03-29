/*
Integer arrays planeRegistrations and numSeats contain elements read from input. For each element in numSeats,
if an element is an even integer, output planeRegistrations' corresponding element followed by a space. 
After the final output, end with a newline.

Ex: If the input is:

106 178 191 128 121 169
23 31 10 12 37 40
then the output is:

191 128 169 
*/
#include <stdio.h>

int main(void) {
   const int NUM_VALS = 6;
   int planeRegistrations[NUM_VALS];
   int numSeats[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(planeRegistrations[i]));
   }

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(numSeats[i]));
   }

   for (i = 0; i < NUM_VALS; ++i) {
      if (numSeats[i] % 2 == 0) {
         printf("%d ", planeRegistrations[i]);
      }
   }
   printf("\n");
   

   return 0;
}