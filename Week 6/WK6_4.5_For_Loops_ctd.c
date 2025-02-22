/*
The ++ operator can appear as ++i (prefix form) or as i++ (postfix form).
 ++i increments i first and then evaluates the result, while i++ evaluates the result first and then increments i. 
 The distinction is relevant in a statement like x = ++i vs. x = i++; if i is 5, the first yields x = 6, the second x = 5.

Some consider ++i safer for beginners in case they type i = ++i, which typically works as expected (whereas i = i++ does not),
 so this material uses ++i throughout. The -- operator also has prefix and postfix versions.
  Incidentally, the C++ programming language gets its name from the ++ operator, 
  suggesting C++ is an increment or improvement over its C language predecessor.

  A common error is to also have a ++i; statement in the loop body, causing the loop variable to be updated twice per iteration.

// Loop variable updated twice per iteration
for (i = 0; i < 5; ++i) {
   // Loop body
   ++i; // Oops
}


*/
/*
Integer inCount is read from input representing the number of integers to be read next.
 Use a loop to read the remaining integers from input into val. If all of the integers are in the range -100 to -90 inclusive,
  assign allMatch with 1. Otherwise, assign allMatch with 0.

Code at the end of main() outputs "All match" if allMatch is 1, or "Value(s) out of range" if allMatch is 0.
*/

#include <stdio.h>

int main(void) {
   int inCount;
   int allMatch;
   int i;
   int val;
   
   allMatch = 1;
   scanf("%d", &inCount);

   for (i = 0; i < inCount; i++) {
      scanf("%d", &val);
      if ((val < -100) || (val > -90)) {
         allMatch = 0;
      }
   }

   if (allMatch == 1) {
      printf("All match");
   }
   else {
      printf("Value(s) out of range");
   }

   return 0;
}