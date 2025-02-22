/*
The first and second integers in the input are read into variables previousNum and currentNum, respectively. 
Write a loop that iterates while currentNum is greater than or equal to previousNum. In each iteration:

Output currentNum, followed by " is greater than or equal to ", previousNum, and ". Sequence is not decreasing." 
End with a newline.

Assign previousNum with currentNum.
Read the next integer from input and assign currentNum with the integer read.
*/


#include <stdio.h>

int main(void) {
   int currentNum;
   int previousNum;
   
   scanf("%d", &previousNum);
   scanf("%d", &currentNum);
   printf("Sequence starts at %d.\n", previousNum);

   while (currentNum >= previousNum) { 
      printf("%d is greater than or equal to %d. Sequence is not decreasing.\n", currentNum, previousNum);
      previousNum = currentNum;
      scanf("%d" , &currentNum);
   }

   return 0;
}