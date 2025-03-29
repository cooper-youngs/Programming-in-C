/*
Write a program whose input is two integers, and whose output is the first integer and subsequent increments of 5 
as long as the value is less than or equal to the second integer.

Ex: If the input is:

-15 10
the output is:

-15 -10 -5 0 5 10 
*/

#include <stdio.h>

int main(void) {

   int lowNum;
   int highNum;
   int outputNum;

   scanf("%d %d", &lowNum, &highNum);
   outputNum = lowNum;

   if (highNum < lowNum) {
    printf("Second integer can't be less than the first.\n");
   }
   else {

   while (outputNum <= highNum) {
    printf("%d ", outputNum);
    outputNum += 5;
   }
   printf("\n");
   }
   return 0;
}

