/*
for (initialExpression; conditionExpression; updateExpression) {
  // Loop body
}
// Statements after the loop
- can use ++ or -- to increment a value


standard way to loop n times
int i;
...
for (i = 0; i < N; ++i) {
   ...
}

-- can also do ++i or --i; this will increment the variable before evaluating to a value

USE A FOR LOOP WHEN THE NUMBER OF ITERATIONS IN KNOWN OTHERWISE USE A WHILE LOOP

Integer numIn is read from input representing the number of integers to be read next. 
Use a for loop to iterate from 0 to numIn - 1. In the loop:

Assign inputVal with the integer value read from input.
Output inputVal.
Unless inputVal is the last input read, output ", " after inputVal.
*/

#include <stdio.h>

int main(void) {
   int numIn;
   int inputVal;
   int i;

   scanf("%d", &numIn);

   for (i = 0 ; i < numIn; i++) {
      scanf("%d", &inputVal);
      printf("%d", inputVal);
      if (i != (numIn - 1)){
         printf(", ");
      }
   }

   printf("\n");

   return 0;
}