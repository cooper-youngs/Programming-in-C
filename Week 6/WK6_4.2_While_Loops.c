/*
A while loop is a program construct that repeatedly executes a list of sub-statements (known as the loop body) 
while the loop's expression evaluates to true. Each execution of the loop body is called an iteration. 
Once entering the loop body, execution continues to the body's end, even if the expression would become false midway through.
*/


/*
while (expression) { // Loop expression
    // Loop body: Executes if expression evaluated to true 
    // After body, execution jumps back to the "while"
}
// Statements that execute after the expression evaluates to false
(see below example)
*/

//NOTE: must have a space before the %c in the scanf statement; this causes whitespace, newline characters to be ignored
//otherwise scanf will return the newline or whitespace and the while loop will fail

/*
COMMON ERRORS
A common error is to use the opposite loop expression than desired, like using x == 0 rather than x != 0. 
Programmers should remember that the expression describes when the loop should iterate, not when the loop should terminate.

An infinite loop is a loop that never stops iterating. A common error is to accidentally create an infinite loop, 
often by forgetting to update a variable in the body, or by creating a loop expression whose evaluation to false 
isn't always reachable.

*/

/* EXERCISE PROMPT
Integer userInput is read from input. Write a while loop that iterates while userInput is non-negative. In each iteration:

Update integer result as follows:
If userInput is not divisible by 3, subtract userInput from result.
Otherwise, add userInput to result.
Then, read the next integer from input into variable userInput.*/

#include <stdio.h>

int main(void) {
   int userInput;
   int result;

   result = 0;
   scanf("%d", &userInput);

   while (userInput >= 0) {
      if (userInput % 3 != 0) {
         result -= userInput;
      }
      else {
         result += userInput;
      }
      scanf("%d", &userInput);
   }

   printf("Result is %d\n", result);

   return 0;
}