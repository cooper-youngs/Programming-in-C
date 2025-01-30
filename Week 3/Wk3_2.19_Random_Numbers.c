/*The rand() function, in the C standard library, returns a random integer
 each time the function is called, in the range 0 to RAND_MAX.
 can use rand() in a print statement like below printf("%d\n", rand())*/

#include <stdio.h>
// includes the C standard library, which defines the 
//rand() function and RAND_MAX.
#include <stdlib.h>   // Enables use of rand()

// Switch a student
// from a random seat on the left  (cols  1 to 15)
//   to a random seat on the right (cols 16 to 30)
// Seat rows are 1 to 20

int main(void) {
  int rowNumL;
  int colNumL;
  int rowNumR;
  int colNumR;

   rowNumL = (rand() % 20) + 1;  // 1 to 20
   colNumL = (rand() % 15) + 1;  // 1 to 15

   rowNumR = (rand() % 20) + 1;  // 1 to 20
   colNumR = (rand() % 15) + 16; // 16 to 30

   printf("Move from ");
   printf("row %d col %d", rowNumL, colNumL);
   printf(" to ");
   printf("row %d col %d\n", rowNumR, colNumR);

   return 0;
}
//rand() % N yields N possible values, from 0 to N-1
/*This technique works for generating random integers ranging from
 0 to N – 1. You might want to generate a range that starts with something
  other than 0, like 10 to 15, or –20 to 20. 

First, determine the number of values in the range, then find an integer 
with that number of possible values. (i.e. for a range of –3 to 5; 
there are 9 numbers in the range. So you would choose the integer 9) 

Then, add or subtract x to adjust for the range to start with x. 

(for the example above you would subtract 3, (rand(x) % 9) - 3 */


/*Internally the rand() function uses an equation to compute the next 
“random” integer based on the last one. Invisibly tracking the 
previous integer.  

For the first call to rand() no previous integer exists. 
So the function uses a built-in integer called the seed. 
By default seed is 1. 
Can change seed using srand() 

To get a different seed for each program run you can use the current time
as the seed.
time() function will return the number of seconds since Jan 1, 1970

Example of using a unique seed for each program run below
#include <stdio.h>
#include <stdlib.h>   
#include <time.h>     // Enables use of time()

int main(void) {
   srand((int)time(0)); // Unique seed
   printf("%d\n", rand());
   printf("%d\n", rand());
   printf("%d\n", rand());

   return 0;
}
*/
