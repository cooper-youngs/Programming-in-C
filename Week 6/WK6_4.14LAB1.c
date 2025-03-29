/*
Write a program that takes in a positive integer as input, and outputs a string of 1's and 0's 
representing the integer in reverse binary. For an integer x, the algorithm is:

As long as x is greater than 0
   Output x % 2 (remainder is either 0 or 1)
   x = x / 2
Note: The above algorithm outputs the 0's and 1's in reverse order.
*/

#include <stdio.h>

int main(void) {

   int userNum;
   int binary;


   scanf("%d", &userNum);

   while (userNum > 0) {
    binary = userNum % 2;
    printf("%d", binary);
    userNum = userNum / 2;
    
   }
   printf("\n");
   return 0;
}