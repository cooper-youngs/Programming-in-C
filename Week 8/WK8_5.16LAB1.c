/*
Write a program that reads a list of integers, and outputs those integers in reverse. 
The input begins with an integer indicating the number of integers that follow.
For coding simplicity, follow each output integer by a comma, including the last one. 
Assume that the list will always contain less than 20 integers.

Ex: If the input is:

5 2 4 6 8 10
the output is:

10,8,6,4,2,
To achieve the above, first read the integers into an array. Then output the array in reverse.
*/

#include <stdio.h>

int main(void) {
   const int NUM_ELEMENTS = 20;         // Number of input integers
   int userVals[NUM_ELEMENTS];
   int i;

   for (i = 0; i < NUM_ELEMENTS; ++i){
    scanf("%d", &userVals[i]);
   }
   for (i = userVals[0]; i > 0; --i){ //use the first number entered to set our i at the last input then iterate backward
    printf("%d,", userVals[i]);
   }
    printf("\n");
   return 0;
}
