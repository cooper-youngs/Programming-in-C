/*
Write a program that takes in three integers and outputs the largest value. If the input integers are the same,
output the integers' value.
*/

#include <stdio.h>

int main() {

   int num1;
   int num2;
   int num3;
   int largest;

   //printf("Please enter 3 integers seperated by a space:");
   scanf("%d %d %d", &num1, &num2, &num3);

   //initially set first number to largest then compare with others
   largest = num1;

   if (num2 > largest) {
    largest = num2;
   }
   //do another if since we want this to run no matter what
   if (num3 > largest) {
    largest = num3;
   }

   //after all checks print largest
   printf("Max of [%d, %d, %d] is %d\n", num1, num2, num3, largest);

   return 0;
}