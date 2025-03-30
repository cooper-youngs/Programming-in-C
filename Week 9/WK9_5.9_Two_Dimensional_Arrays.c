/*
An array can be declared with two dimensions.  
int myArray[R][C] represents a table of int variables with R rows and C columns,
so R*C elements total. For example, int myArray[2][3] creates a table with 2 rows and 3 columns,
for 6 int variables total. Example accesses are myArray[0][0] = 33; or num = myArray[1][2].

A programmer can initialize a two-dimensional array's elements during declaration using nested braces, 
as below. Multiple lines make the rows and columns more visible.

// Initializing a 2D array
int numVals[2][3] = { {22, 44, 66}, {97, 98, 99} };

// Use multiple lines to make rows more visible
int numVals[2][3] = {
   {22, 44, 66}, // Row 0
   {97, 98, 99}  // Row 1
};

Arrays of three or more dimensions can also be declared, as in int myArray[2][3][5], 
which declares a total of 2*3*5 or 30 elements.

rows and columns are zero indexed


Write a loop to iterate from 0 to the last row of milesTracker. Within each row, use a nested loop to iterate from 0 to the last column of milesTracker.

Within the nested loop, if an element is greater than maxMiles, assign maxMiles with the value of the element. Similarly, if an element is less than minMiles, assign minMiles with the value of the element.

Ex: If the input is:

-10 20 30 40

the output is:
Min miles: -10
Max miles: 40
*/

#include <stdio.h>

int main(void) {
   const int NUM_ROWS = 2;
   const int NUM_COLS = 2;
   int milesTracker[NUM_ROWS][NUM_COLS];
   int i;
   int j;
   int maxMiles = 0;
   int minMiles = 0;

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         scanf("%d", &(milesTracker[i][j]));
      }
   }

   maxMiles = milesTracker[0][0];
   minMiles = milesTracker[0][0];

   for (i = 0; i < NUM_ROWS; i++){
      for (j = 0; j < NUM_COLS; j++){
         if (milesTracker[i][j] > maxMiles) {
            maxMiles = milesTracker[i][j];
         }
         else if (milesTracker[i][j] < minMiles) {
            minMiles = milesTracker[i][j];
         }}}

   printf("Min miles: %d\n", minMiles);
   printf("Max miles: %d\n", maxMiles);

   return 0;
}