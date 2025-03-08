/*
Arrays store a list of data, each item in array is an element
     - Each elements position is called its index, indices start at 0

Declaration

dataType arrayName[numElements];
     - This statement declares an array having the specified number of elements in memory, 
      each element of the specified data type. The desired number of elements are specified in [ ] symbols

Index is an expression. 
Ex: userNums[i] uses the value held in the int variable i as the index. As such, an array is useful to easily lookup the Nth item in a list.

An array's index must be an integer type. The array index cannot be a floating-point type, even if the value is 0.0, 1.0,

Can use loops to assign or access element in array

may initialize an array's elements in an array variable declaration by specifying the initial values in braces {}
separated by commas. Ex: int myArray[3] = {5, 7, 11}

Write a for loop to print all elements in courseGrades, following each element with a space (including the last). 
Print forwards, then backwards. End each loop with a newline. 

Ex: If courseGrades = {7, 9, 11, 10}, print:
7 9 11 10 
10 11 9 7 

*/

#include <stdio.h>

int main(void) {
   const int NUM_VALS = 4;
   int courseGrades[NUM_VALS];
   int i;

   for (i = 0; i < NUM_VALS; ++i) {
      scanf("%d", &(courseGrades[i]));
   }

   for (i = 0; i < NUM_VALS; ++i) {
      printf("%d ", courseGrades[i]);
   }
   printf("\n");
   for (i = NUM_VALS - 1; i >= 0; --i) {
      printf("%d ", courseGrades[i]);
   }
   printf("\n");
   return 0;
}